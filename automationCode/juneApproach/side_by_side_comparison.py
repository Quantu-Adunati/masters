#!/usr/bin/env python3
import re

def extract_rules(filename):
    """Extract rule names and bodies from Bison file"""
    with open(filename, 'r') as f:
        content = f.read()
    
    rules = {}
    # Match rule_name: body...;
    pattern = r'^(\w+)\s*:\s*(.+?);'
    for match in re.finditer(pattern, content, re.MULTILINE | re.DOTALL):
        name = match.group(1)
        body = match.group(2).strip()
        # Normalize whitespace
        body = ' '.join(body.split())
        rules[name] = body
    return rules

gen_rules = extract_rules('generated.y')
bison_rules = extract_rules('../bisonExample.y')

print("=" * 100)
print("SIDE-BY-SIDE COMPARISON: generated.y vs bisonExample.y")
print("=" * 100)

print("\n### RULES IN BOTH FILES (SEMANTIC EQUIVALENCE CHECK)")
print("=" * 100)

# Check rules that exist in both
both = set(gen_rules.keys()) & set(bison_rules.keys())
for rule in sorted(both):
    gen_body = gen_rules[rule]
    bison_body = bison_rules[rule]
    
    match = "✓" if gen_body == bison_body else "◐"
    print(f"\n{match} {rule}")
    print(f"  Generated: {gen_body[:80]}{'...' if len(gen_body) > 80 else ''}")
    print(f"  BisonEx:   {bison_body[:80]}{'...' if len(bison_body) > 80 else ''}")

print("\n\n### RULES ONLY IN GENERATED.Y")
print("=" * 100)
only_gen = set(gen_rules.keys()) - set(bison_rules.keys())
if only_gen:
    for rule in sorted(only_gen):
        body = gen_rules[rule]
        print(f"  {rule}: {body[:80]}{'...' if len(body) > 80 else ''}")
else:
    print("  None! Generated.y doesn't have extra rules.")

print("\n\n### RULES ONLY IN BISONEXAMPLE.Y")
print("=" * 100)
only_bison = set(bison_rules.keys()) - set(gen_rules.keys())
if only_bison:
    for rule in sorted(only_bison):
        body = bison_rules[rule]
        print(f"  {rule}: {body[:80]}{'...' if len(body) > 80 else ''}")
else:
    print("  None! All BisonExample rules are in generated.y.")

print("\n\n### SUMMARY STATISTICS")
print("=" * 100)
print(f"Generated.y rules: {len(gen_rules)}")
print(f"BisonExample.y rules: {len(bison_rules)}")
print(f"Rules in common: {len(both)}")
print(f"Only in generated: {len(only_gen)}")
print(f"Only in bisonExample: {len(only_bison)}")
print(f"\nStructural Equivalence: {len(both)} / {len(bison_rules)} ({100*len(both)//len(bison_rules)}%)")

