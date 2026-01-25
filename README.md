# Simple Calculator in C

This is a **menu-driven Simple Calculator program written in C**.  
It performs basic arithmetic operations as well as some mathematical functions using the `math.h` library.

---

## 🔧 Features

The calculator supports the following operations:

1. **Multiplication**
2. **Division**
3. **Addition (Sum)**
4. **Subtraction (Difference)**
5. **Square of a number**
6. **Cube of a number**
7. **Logarithm (base 10)**
0. **Exit**

---

## 📌 How It Works

- The program runs inside a `while` loop until the user enters `0` (exit).
- For operations **1 to 4**, the program asks for **two numbers**.
- For operations **5, 6, and 7**, the program asks for **one number**.
- Mathematical functions like `log10()` are used from the **math.h** library.

---

## 🧠 Concepts Used

- C Programming basics
- Conditional statements (`if-else`)
- Looping (`while`)
- User input/output (`scanf`, `printf`)
- `math.h` library functions
- Floating-point calculations

---

## ▶️ How to Run

1. Compile the program:
   ```bash
   gcc calculator.c -o calculator -lm
