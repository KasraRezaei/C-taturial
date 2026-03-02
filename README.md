# Stack Implementation (C)

This project implements a simple **stack Abstract Data Type (ADT)** in C and demonstrates its usage in a small program.

---

## Files

### `stack.h`

- Header file for the stack ADT
- Contains:
  - Stack data structure definition
  - Function declarations for stack operations
- Intended to be included by any source file that uses the stack

Typical operations declared include:

- stack initialization
- push
- pop
- peek/top
- empty/full checks

---

### `stack.c`

- Implementation of the stack ADT
- Defines all functions declared in `stack.h`
- Contains the logic for managing the stack data structure

This file should be compiled into an object file and linked with programs that use the stack.

---

### `myProgram.c`

- Driver program that uses the stack
- Includes `stack.h`
- Demonstrates stack operations such as pushing and popping elements
- Contains the `main()` function

---

## Compilation

Compile the source files and link them together using `gcc`:

```bash
gcc -Wall -std=c99 -c stack.c -o stack.o
gcc -Wall -std=c99 -c myProgram.c -o myProgram.o
gcc stack.o myProgram.o -o myProgram
```
