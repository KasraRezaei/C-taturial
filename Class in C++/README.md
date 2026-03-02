# Stack Class in C++

This project implements a simple **Stack** using a C++ class.  
It demonstrates basic object-oriented programming concepts such as classes, encapsulation, and separate compilation.

---

## Files

### `Stack.hpp`

- Header file containing the **Stack class declaration**
- Defines:
  - Stack size
  - Private data members
  - Public member function prototypes
- Does **not** contain function implementations

---

### `Stack.cpp`

- Implementation file for the Stack class
- Defines the member functions:
  - `push(int)`
  - `pop()`
- Implements stack overflow and underflow checks

---

### `myProgram.cpp`

- Main driver program
- Creates a Stack object
- Calls `push` and `pop` to demonstrate stack behaviour
- Contains the `main()` function

---

## Compilation

Compile each source file into an object file, then link them together:

```bash
g++ -Wall -std=c++17 -c Stack.cpp -o Stack.o
g++ -Wall -std=c++17 -c myProgram.cpp -o myProgram.o
g++ Stack.o myProgram.o -o myProgram
```
