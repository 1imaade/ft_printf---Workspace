# ft_printf & C Foundations Self-Study Syllabus

This document outlines the exact concepts, search terms, man pages, and video topics you need to master `ft_printf` independently without AI writing your code.

---

## 1. Prerequisites (C & Systems Foundations)

### Topic A: Bases & Number Representation
- **What to study**:
  - Why computers use binary (Base 2), decimal (Base 10), and hexadecimal (Base 16).
  - Why 1 byte = 2 hexadecimal digits (a nibble = 4 bits).
  - Two's complement representation: How negative numbers are stored in memory.
  - Why `INT_MIN` is `-2147483648` and `INT_MAX` is `2147483647` (the asymmetry of two's complement).
  - Integer overflow: What happens when you do `-(-2147483648)`?
- **Search Queries**:
  - `"Two's complement explained"`
  - `"Why INT_MIN cannot be negated in C"`
  - `"Hexadecimal and binary representation in C"`

### Topic B: Pointer Mechanics & Addresses
- **What to study**:
  - A pointer is just a memory address (on 64-bit Linux, it is an 8-byte / 64-bit integer).
  - What `uintptr_t` is (`<stdint.h>`): an unsigned integer guaranteed to hold a pointer address.
  - Dereferencing vs taking the address (`*` vs `&`).
  - `NULL` pointer: what memory address it represents (`0x0`).
- **Search Queries**:
  - `"What is uintptr_t in C and why use it"`
  - `"Pointers and memory addresses explained in C"`

### Topic C: Recursion & Stack Frames
- **What to study**:
  - How recursion utilizes the call stack to print numbers in the correct order (most significant digit first) without allocating string buffers.
  - Base case vs recursive case.
- **Search Queries**:
  - `"Recursive number printing in C"`
  - `"Printing base 16 hex recursively in C"`

---

## 2. Core ft_printf Concepts

### Topic D: Variadic Functions & `<stdarg.h>`
- **What to study**:
  - The ellipsis `...` syntax in function prototypes.
  - The 4 macros: `va_list`, `va_start`, `va_arg`, `va_end` (and `va_copy`).
  - **Default Argument Promotions** in C (CRITICAL):
    - In variadic functions, `char` and `short` are automatically promoted by the compiler to `int`.
    - `float` is automatically promoted to `double`.
    - Why `va_arg(args, char)` causes undefined behavior and compiler errors, and why you must do `(char)va_arg(args, int)`.
- **Search Queries / Videos**:
  - YouTube: `"Jacob Sorber variadic functions in C"`
  - YouTube: `"CodeVault variadic functions"`
  - `"C default argument promotions variadic"`
  - Man page: `man 3 stdarg`

### Topic E: Format String Parsing (State Machine)
- **What to study**:
  - How `printf` traverses a format string:
    - Normal character: print directly.
    - `%` detected: enter "conversion mode" and read the next character (the specifier).
  - Handling `%%`: printing a literal percent sign.
  - Specifiers required by 42: `c`, `s`, `p`, `d`, `i`, `u`, `x`, `X`, `%`.
- **Search Queries**:
  - `"How printf parser works in C"`
  - `"Writing your own printf in C step by step"`

### Topic F: Format Specifier Handlers & Edge Cases
- **What to study**:
  1. `%c`: Output a single character (handling `\0`).
  2. `%s`: Output a string (handling `NULL` -> prints `(null)`).
  3. `%p`: Output a pointer address in hex preceded by `0x` (handling `NULL` -> prints `(nil)` on Linux).
  4. `%d` / `%i`: Output signed decimal integer (handling `INT_MIN`, negative numbers).
  5. `%u`: Output unsigned decimal integer (values `0` to `4294967295`).
  6. `%x` / `%X`: Output lowercase / uppercase hex without `0x`.
  7. `%%`: Output `%`.

### Topic G: Return Value Contract & Error Handling
- **What to study**:
  - `printf` returns the **total count of characters printed**.
  - How to track character counts across multiple function calls (e.g., return value accumulation or pointer to counter).
  - What happens if the `write` system call fails (returns `-1`)?
- **Search Queries / Man pages**:
  - `man 3 printf` (read the RETURN VALUE section)
  - `man 2 write` (read the RETURN VALUE and ERRORS section)

---

## 3. Recommended Learning Resources

1. **Linux Man Pages** (Open terminal and run):
   - `man 3 printf`
   - `man 3 stdarg`
   - `man 2 write`

2. **YouTube Channels for Low-Level C**:
   - **Jacob Sorber**: Search *"Jacob Sorber variadic functions"*, *"Jacob Sorber printf"*.
   - **CodeVault**: Search *"CodeVault variadic functions in C"*, *"CodeVault pointers"*.
   - **Low Level Learning**: Videos on memory layout, stack, and pointers.

3. **Books & References**:
   - *The C Programming Language (K&R)* — Chapter 7.3 (Variable-length Argument Lists).
   - *Computer Systems: A Programmer's Perspective (CS:APP)* — Calling conventions & register usage.
