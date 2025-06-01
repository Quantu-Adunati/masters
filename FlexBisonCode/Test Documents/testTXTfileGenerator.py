import random
import os

def generate_random_text(min_words=5, max_words=1000, num_paragraphs=500):
    """Generates random text with variable length and paragraphs.

    Args:
        min_words (int): Minimum number of words per paragraph.
        max_words (int): Maximum number of words per paragraph.
        num_paragraphs (int): Number of paragraphs to generate.

    Returns:
        str: The generated random text.
    """
    text = ""
    for _ in range(num_paragraphs):
        words = random.randint(min_words, max_words)
        paragraph = " ".join(random.choice(["lorem", "ipsum", "dolor", "sit", "amet", "consectetur", "adipiscing", "elit", "sed", "do", "eiusmod", "tempor", "incididunt", "ut", "labore", "et", "dolore", "magna", "aliqua"]) for _ in range(words))
        text += paragraph + "\n\n"
    return text

for i in range(10):  # Generate 100 files
    filename = f"random_text_{i}.txt"
    with open(filename, "w") as file:
        file.write(generate_random_text(num_paragraphs=random.randint(2, 1000)))

print(f"Generated 100 random text files in the current directory.")
"""python3 testTXTfileGenerator.py"""