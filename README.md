# Intro to C Programming – Lab Instruction Materials

## About This Repository

I am a Teaching Assistant for the Intro to C Programming course (January 2026 to April 2026), and this repository contains lab instruction materials and example programs created to help students during lab sessions.

## Overview
This repository contains instructional materials and example programs used during **Intro to C Programming lab sessions**. The labs were designed to help students build a strong foundation in **C programming**, with a focus on user input, memory handling, and formatted input/output.

These materials were created to support beginner programmers and reinforce both **conceptual understanding** and **hands-on coding practice**.

## Skills Demonstrated
- Teaching Assistant experience in Introductory C Programming
- Mentoring and supporting beginner-level computer science students
- C programming fundamentals (scanf, printf, data types, pointers, memory management)
- Debugging, error handling, and compiler warning analysis in C
- Explaining low-level concepts such as memory addresses and input buffers
- Code quality best practices (readability, indentation, naming conventions, documentation)
- Technical communication and instructional design for programming labs
- Academic leadership, classroom facilitation, and student support

## What I Taught in Lab Sessions

During the lab sessions, I guided students through the following core concepts:

### 1. Using `scanf()` for User Input
- Purpose of `scanf()` and how it reads input from the keyboard.
- How user input is stored in memory.
- Understanding the syntax of `scanf()` and its components.
- Common beginner mistakes and how to avoid them.

### 2. Memory Addresses and the Address-of Operator (`&`)
- How variables are stored in memory.
- When and why the `&` operator is required.
- Difference between primitive and non-primitive data types:
  - `&` required for primitive types (`int`, `float`, `double`, `char`)
  - `&` not required for arrays and strings

### 3. Primitive Data Types in C
- Explanation of primitive data types and their characteristics.
- Fixed memory size and basic usage.
- Examples using:
  - `int`
  - `float`
  - `double`
  - `char`

### 4. Format Specifiers
- Proper use of format specifiers in `scanf()` and `printf()`.
- Common format specifiers covered:
  - `%d` → integer
  - `%f` → float
  - `%lf` → double
  - `%c` → character
- Difference between `%f` and `%lf`.

### 5. Handling Character Input Correctly
- Why `%c` does not skip whitespace by default.
- Issues caused by leftover newline characters in the input buffer.
- Use of `" %c"` to safely read character input.

### 6. Output Formatting with `printf()`
- Matching variables with correct format specifiers.
- Maintaining correct order between format specifiers and variables.
- Proper use of escape sequences such as `\n`.
- Common errors such as:
  - Forgetting `%` in format specifiers
  - Using incorrect variable names
  - Confusing single quotes and double quotes

### 7. Debugging and Best Coding Practices
- Importance of meaningful variable names.
- Proper indentation and readability.
- Ending statements with semicolons.
- Interpreting compiler warnings and errors.

## Example Programs Included
- Reading single and multiple user inputs using `scanf()`
- Printing output correctly using `printf()`
- Displaying memory addresses using `%p`
- Handling mixed numeric and character inputs safely

## Learning Outcomes
By the end of the lab sessions, students were able to:
- Confidently take user input using `scanf()`
- Understand how data is stored in memory
- Use correct format specifiers consistently
- Avoid common C programming mistakes
- Write clean, readable, and well-structured C programs


## Notes
These materials are intended as **learning aids** and do not guarantee coverage on quizzes, midterms, or finals. Students are encouraged to practice coding regularly and focus on understanding core concepts.
