# Operator Overloading in C++

This project demonstrates **operator overloading in C++** using a custom class `MyInteger`.
The program overloads the `+` operator to allow two `MyInteger` objects to be added together like built-in integers.

---

## Files

### `overloading.hpp`

Header file containing the **declaration of the `MyInteger` class**.

It defines:

- A private integer variable `i`
- A constructor `MyInteger(int)`
- A function `Value()` that returns the stored integer
- An overloaded `+` operator to add two `MyInteger` objects

---

### `overloading.cpp`

Implementation file that defines the member functions declared in `overloading.hpp`.

Functions implemented:

- `MyInteger::MyInteger(int)` – constructor that initializes the value
- `MyInteger::Value()` – returns the stored integer
- `MyInteger::operator+()` – overloads the `+` operator to add two `MyInteger` objects

---

### `main.cpp`

The main driver program that:

- Creates `MyInteger` objects
- Uses the overloaded `+` operator
- Prints the result to the console

---

## Compilation

The program uses **separate compilation**. Each `.cpp` file is compiled into an object file first, then linked together.

### Compile the source files

```bash
g++ -Wall -std=c++17 -c overloading.cpp -o overloading.o
g++ -Wall -std=c++17 -c main.cpp -o main.o
```

### Link the object files

```bash
g++ overloading.o main.o -o main
```

---

## Running the Program

After successful compilation, run the executable:

```bash
./main
```

---

## Concepts Demonstrated

- Classes and encapsulation
- Operator overloading
- Separate compilation in C++
- Object interaction using custom operators

---
