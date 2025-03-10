## **Lecture Notes: C++ **

### **1. Introduction to C++**
- **C++** is a general-purpose, object-oriented programming language.
- It is widely used in software development, gaming, systems programming, and applications requiring high-performance computation.

---

### **2. Basic Structure of C++ Program**
- Every C++ program starts with the **`#include`** directive, which is used to include libraries (like `iostream` for input/output functionality).
- The entry point of the program is the **`main()`** function.
- The **`cout`** function is used to display output, and **`cin`** is used to receive input.

---

### **3. Output Statements**
```cpp
#include <iostream>  // Including the input/output library
using namespace std;

int main() {
    cout << "Hello, Class!";  // Outputs a string to the console
    return 0;
}
```
- **`cout`** is used to output data to the console.
- **`return 0;`** indicates that the program ended successfully.

---

### **4. Comments in C++**
- **Single-line comment**: `// This is a comment`
- **Multi-line comment**: `/* This is a comment */`
- **Comments** are ignored by the compiler and are used to explain the code.

---

### **5. Variable Declarations**
- A **variable** is used to store data that can be modified during the execution of a program.
- A **data type** must be specified when declaring a variable (e.g., `int`, `float`, `char`, etc.).

Example of declaring variables:
```cpp
int number;   // Declare an integer variable named 'number'
float salary; // Declare a floating-point variable 'salary'
char grade;   // Declare a character variable 'grade'
```

---

### **6. C++ Variable Naming Rules**
In C++, variables must follow these rules:
- **Start with a letter or an underscore (`_`).**
  - Invalid: `12number;` (starts with a number).
  - Valid: `number123;`, `_num;`
- **No spaces allowed in variable names.** Use an underscore to separate words (e.g., `first_name`).
- **Avoid using special characters** (e.g., `@`, `$`, `&`).
  - Invalid: `num@;`
  - Valid: `_num$;`
- **Keywords (reserved words) cannot be used as variable names.** For example, `for`, `int`, `float` are reserved keywords in C++.
- **C++ is case-sensitive.** This means `num` and `Num` are considered different variables.
- **A variable can only be declared once in the same scope.**

---

### **7. Example: Correct and Incorrect Variable Names**
```cpp
int number123;   // Valid
int _num$;       // Valid but '$' is not typically used
int first_name;  // Valid
int 12number;    // Invalid: cannot start with a number

string for;      // Invalid: 'for' is a reserved keyword
```

---

### **8. Variable Declarations in Same Scope**
- A variable can be declared only once in a scope.
- **Redeclaring a variable** will cause a **compiler error**.

Example:
```cpp
int result;      // Declare the variable 'result'
int result;      // Error: 'result' is already declared in this scope
```

---

### **9. Data Types in C++**
- **Primitive Data Types**:
  - `int`: Stores integers (e.g., `-1`, `0`, `100`)
  - `float`: Stores floating-point numbers (e.g., `3.14`, `-0.01`)
  - `char`: Stores a single character (e.g., `'a'`, `'1'`)
  - `double`: Stores large floating-point numbers
- **Derived Data Types**:
  - Arrays, pointers, structures, etc.
- **Modifiers**: `signed`, `unsigned`, `long`, `short` can modify these types.

---

### **10. Constants and Literals**
- A **constant** is a value that does not change during program execution.
- In C++, constants are declared using the `const` keyword.

Example:
```cpp
const float PI = 3.14159;  // A constant to store the value of pi
```

---

### **11. Case Sensitivity in C++**
- **C++ is case-sensitive**, meaning that `variable` and `Variable` are two distinct variables.
- Always be careful with letter casing when naming variables or functions.

Example:
```cpp
int num;   // Valid
int Num;   // Valid, different from 'num'
```

---

### **12. Note:**
- **Variable Declaration**: Variables must be declared with a data type and follow the naming conventions.
- **Naming Rules**: Follow C++ rules such as avoiding keywords, spaces, or special characters.
- **Case Sensitivity**: Remember that `int var` and `int Var` are different.
- **Single Declaration**: Each variable must be declared once in a given scope.
- **Data Types**: C++ provides a variety of data types for handling different kinds of data.

---

### **Practice Exercise:**
1. Write a program that declares variables of different types and outputs their values to the console.
2. Create a program where you use both correct and incorrect variable names to test the compiler’s feedback.

---

### **13. References:**
- [GeeksforGeeks: C++ Keywords](https://www.geeksforgeeks.org/cpp-keywords/)

---
