# Inheritance in C++

This project demonstrates **basic inheritance in C++** using two classes:

- `Class` – a base class containing integer members and arithmetic functions.
- `secondClass` – a derived class that inherits from `Class`.

The program is compiled using **g++ with the C++17 standard** and uses **separate compilation**.

---

## Files

### `Class.hpp`

Header file that contains the declarations for:

- `Class`
- `secondClass`

It defines:

- data members (`i`, `j`, `k`)
- constructors
- member function prototypes

---

### `Class.cpp`

Implementation file containing the definitions of the functions declared in `Class.hpp`.

This includes:

- constructor definitions
- arithmetic functions such as `add()` and `subtract()`
- constructor for the derived class.

---

### `myProgram.cpp`

Main program that:

- creates objects of the classes
- calls the class methods
- demonstrates inheritance.

---

## Compilation

First compile each source file into an **object file**:

```bash
g++ -Wall -std=c++17 -c Class.cpp -o Class.o
g++ -Wall -std=c++17 -c myProgram.cpp -o myProgram.o
```
