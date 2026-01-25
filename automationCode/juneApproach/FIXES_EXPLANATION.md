# Grammar Builder Fixes - Comprehensive Explanation

## Overview
This document explains the fixes implemented to address the critical issues with loop/conditional nesting and empty production generation in `grammarBuilder.py`.

---

## Fix 1: Proper Nesting Stack Management with Mutable Counters

### Problem
The original code used immutable integer counters (`loop_counter` and `cond_counter`) that were passed by value to recursive functions. When incremented inside the function, the increment didn't persist across the while loop that processes multiple lines at the same scope level.

**Original Code:**
```python
def _process_lines(self, lines, parent, path=None, depth=0):
    if parent not in self.loop_counter:
        self.loop_counter[parent] = 0  # Global per-parent
    
    while i < len(lines):
        if loop_match:
            loop_id = self.loop_counter[parent]
            self.loop_counter[parent] += 1  # Incremented globally
```

**Problem Example:**
When processing WritePages() with 3 sequential while loops at the same level:
```c
while (!atEOF) { ... }        // Would get L0
  while (column++ <= columns) { ... }  // Would get L1 (WRONG - should be L0 in parent scope)
    while (lineNo++ < lines) { ... }   // Would get L2
```

The nested loop would start with a fresh counter, so both outer and inner got L0-L2 numbering incorrectly.

### Solution
Changed to use **mutable list-based counters** that persist across scope:

```python
def _process_lines(self, lines, parent, path=None, depth=0, 
                  local_loop_counter=None, local_cond_counter=None):
    # Use lists as mutable counters so increments persist
    if local_loop_counter is None:
        local_loop_counter = [0]  # Mutable wrapper
    if local_cond_counter is None:
        local_cond_counter = [0]
    
    while i < len(lines):
        if loop_match:
            loop_id = local_loop_counter[0]
            local_loop_counter[0] += 1  # Increments persist in this scope
```

**Result:**
- Sequential sibling loops/conditionals at the same scope level now get unique incremental IDs
- Nested structures properly reset counters to [0] when recursing deeper
- Path structure properly reflects actual nesting depth

**Example Output (Before vs After):**
```
BEFORE:  WritePages_L0, WritePages_L0_L1, WritePages_L0_L1_L2_B5_C0 (confusing paths)
AFTER:   WritePages_L0, WritePages_L0_L0, WritePages_L0_L0_L0_C0 (clear nesting)
```

---

## Fix 2: Reset Counters Properly Per Scope

### Problem
The old code used a global dictionary `self.loop_counter[parent]` that tracked counters per function. This caused interference between different code paths:
- When processing multiple functions or different branches, counters would accumulate across unrelated branches
- Sibling branches in the same function would contaminate each other's numbering

**Original Code:**
```python
self.loop_counter = {}  # Global per-parent
self.cond_counter = {}

# In _process_lines:
if parent not in self.loop_counter:
    self.loop_counter[parent] = 0
```

### Solution
Changed to **local parameters that reset on recursive descent**:

```python
def _process_lines(self, lines, parent, path=None, depth=0, 
                  local_loop_counter=None, local_cond_counter=None):
    
    # When recursing into nested scope, pass fresh counters:
    loop_rule, _ = self._process_lines(
        block_lines, 
        parent=parent, 
        path=path + [f"L{loop_id}"],
        depth=depth+1,
        local_loop_counter=[0],  # Fresh start for nested scope
        local_cond_counter=[0]   # Fresh start for nested scope
    )
    
    # When processing unnamed blocks, continue with same counters:
    block_rule, _ = self._process_lines(
        block_lines, 
        parent=parent, 
        path=path,  # Same path
        depth=depth+1,
        local_loop_counter=local_loop_counter,  # Continue numbering
        local_cond_counter=local_cond_counter
    )
```

**Result:**
- Each function gets its own counter space (L0, L1, L2, etc.)
- Each nested level starts fresh with C0, L0
- Sibling conditionals don't interfere with each other

**Example from text2pdf.c WritePages():**
```
L0: while (!atEOF)              // Outer loop
  L0: while (column++ <= columns)  // First inner loop (reset counter for this nesting)
    L0: while (lineNo++ < lines)   // Second inner loop (reset again)
      L0: while (charNo++<cols)    // Third inner loop
        C0: if (ch >= 32 && ch <= 127)
          C0: if (ch == '(' || ...)  // Nested within C0
          C1: else
```

---

## Fix 3: Handle Inline Conditionals Properly

### Problem
Inline conditionals like `if (...) writestr(...);` were not being captured as conditional structures. Instead, the `writestr` was being extracted separately, losing the fact that it's conditional.

**Original Code:**
```python
# In token grouping loop:
if 'writestr' in line:
    params = getMethodParamsFromLine(line)
    tokens = findTokenValue(params).strip().split()
    for token in tokens:
        rule_parts.append(token)  # Extracted as unconditional tokens!
```

For a line like: `if (ch == '(') writestr("\\");`
- The `writestr("\\")` would be extracted as unconditional STRING
- The conditional structure `if (ch == '(')` would be lost
- This caused empty conditionals in the grammar

### Solution
Added **early detection and handling of inline conditionals BEFORE token grouping**:

```python
# --- Check for inline conditional with writestr (BEFORE grouping) ---
inline_cond_match = re.match(
    r'(if|else if)\s*\((.*?)\)\s*(writestr|sprintf)\s*\((.*?)\);', 
    line
)
if inline_cond_match:
    cond_nt = '_'.join(path + [f"C{local_cond_counter[0]}"])
    local_cond_counter[0] += 1
    
    # Extract tokens from the writestr/sprintf call
    params = inline_cond_match.group(4)
    tokens = findTokenValue(params).strip().split()
    if tokens:
        cond_rule = ' '.join(tokens)
        # Create a rule for this conditional: can be skipped or executed
        self.grammar_rules[cond_nt] = f"{cond_rule} | /*empty*/"
        rule_parts.append(cond_nt)
    continue  # Skip normal processing
```

**Result:**
- Inline conditionals are now recognized as non-terminals
- The conditional structure is preserved in the grammar
- Each inline conditional can be optional (execute or skip)

**Example Output:**
```yacc
WritePages_L0_L0_L0_C0: STRING | /*empty*/;
WritePages_L0_L0_L0_C0_C1: STRING WritePages_L0_L0_L0_C0_C1_C0 | /*empty*/;
```

Instead of having them as plain unconditional STRING tokens.

---

## Fix 4: Reduce Overly-Aggressive Empty Productions

### Status
This fix was already in the improved logic - we only add `| /*empty*/` when truly optional:

```python
# For conditionals with else clause (fully covered):
if alt_rule:
    self.grammar_rules[cond_nt] = f"{cond_rule} | {alt_rule}"
else:
    # Optional (if without else means body MAY or MAY NOT execute)
    self.grammar_rules[cond_nt] = f"{cond_rule} | /*empty*/"

# For loops (always optional - can iterate 0 times):
self.grammar_rules[loop_nt] = f"{loop_rule} | /*empty*/"
```

The key principle: Only loops and if-without-else should have optional empty alternatives. Required branches within conditionals should not.

---

## Impact and Improvements

### Before Fixes
```yacc
%type <str> WritePages_L0_L1
%type <str> WritePages_L0_L1_C10
%type <str> WritePages_L0_L1_L2_B5_C0
%type <str> WritePages_L0_L1_L2_B5_C0_C1
%type <str> WritePages_L0_L1_L2_C3
%type <str> WritePages_L0_L1_L2_C4
%type <str> WritePages_L0_L1_L2_C5
%type <str> WritePages_L0_L1_L2_C6

WritePages_L0_L1_L2_C3: /*empty*/;
WritePages_L0_L1_L2_C4: /*empty*/;
WritePages_L0_L1_L2_C5: /*empty*/;
WritePages_L0_L1_L2_C6: /*empty*/;
```
**Issues:**
- Mysterious `B5` block identifier (unnamed block)
- Empty productions don't capture actual code structure
- Path grows indefinitely without proper scoping

### After Fixes
```yacc
%type <str> WritePages_L0_L0
%type <str> WritePages_L0_L0_L0
%type <str> WritePages_L0_L0_L0_C0
%type <str> WritePages_L0_L0_L0_C0_C0
%type <str> WritePages_L0_L0_L0_C0_C1
%type <str> WritePages_L0_L0_L0_C0_C1_C0

WritePages_L0_L0_L0_C0: WritePages_L0_L0_L0_C0_C0 STRING_LIST WritePages_L0_L0_L0_C0_C1 | /*empty*/;
WritePages_L0_L0_L0_C0_C0: STRING | /*empty*/;
WritePages_L0_L0_L0_C0_C1: STRING WritePages_L0_L0_L0_C0_C1_C0 | /*empty*/;
WritePages_L0_L0_L0_C0_C1_C0: STRING_LIST | /*empty*/;
```
**Improvements:**
- Clear nesting hierarchy with proper L/C numbering
- Conditionals have actual structure (tokens + nested rules)
- Counter resets ensure sibling constructs are distinguishable
- Inline conditionals properly captured

---

## Remaining Issues and Future Work

### 1. Some Conditionals Still Empty
Conditionals like `C1`, `C2`, `C3` within the innermost loop still show as `/*empty*/`. This suggests:
- Variable assignments (not writestr) are being skipped
- Multi-line conditionals might not be properly extracted
- Edge cases in block extraction

### 2. Pattern Recognition (Fix 5)
The generated grammar is still monolithic. Future work:
- Detect repeating patterns (like `pages` repetition in hand-written)
- Create reusable non-terminals for sequences
- Refactor monolithic rules into modular pieces

### 3. Testing and Validation (Fix 6)
- Create unit tests for nested loops
- Test inline conditionals
- Validate sibling branch handling
- Compare generated.y against bisonExample.y more rigorously

---

## How to Verify the Fixes

### Visual Inspection
```bash
# Before fixes: paths were mixed (L0_L1_L2_B5_C0)
# After fixes: paths are consistent (L0_L0_L0_C0)
head -60 generated.y | grep "type <str>"
```

### Counter Consistency
Count occurrences of each counter level to ensure proper reset:
```bash
# Should see L0, L1, L2 but NOT L0_L0_L1 (would indicate improper nesting)
grep "L0_L0" generated.y | head -5
```

### Compare Structure
```bash
# Hand-written has modular patterns:
grep "^[a-z].*:.*|" bisonExample.y | wc -l

# Generated now has better structure:
grep "^Write.*:.*|" generated.y | wc -l
```

---

## Code Changes Summary

| File | Change | Lines | Impact |
|------|--------|-------|--------|
| grammarBuilder.py | Removed global counters | 6-7 | Enables local scope-based counting |
| grammarBuilder.py | Added mutable counter lists | 127-131 | Fixes persistent state across iterations |
| grammarBuilder.py | Inline conditional detection | 145-159 | Preserves conditional structure in grammar |
| grammarBuilder.py | Counter references updated | 22 places | Uses [0] indexing for persistence |
| grammarBuilder.py | Recursive calls reset counters | 6 places | Ensures each scope starts fresh |

