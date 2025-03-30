In C programming, **data types** define the type of data a variable can hold. The choice of data type affects the amount of memory allocated for the variable and determines the range of values the variable can store. C provides several **primitive** (built-in) data types and allows you to define **user-defined** types as well.

### **1. Basic Data Types (Primitive Data Types)**

These are the core data types in C that represent simple values.

#### **a. Integer Types**:
These data types are used to store whole numbers (without decimals).

- **`int`**: Used to store integers (whole numbers).
  - Typically 4 bytes (32 bits) on most systems.
  - Range: `-2,147,483,648` to `2,147,483,647` (on a 32-bit system).
  ```c
  int num = 100;
  ```

- **`short`**: Used to store smaller integers.
  - Typically 2 bytes (16 bits).
  - Range: `-32,768` to `32,767` (on a 16-bit system).
  ```c
  short int smallNum = 25;
  ```

- **`long`**: Used to store larger integers.
  - Typically 4 bytes (32 bits) or 8 bytes (64 bits), depending on the system.
  - Range: `-2,147,483,648` to `2,147,483,647` (on a 32-bit system), or larger on a 64-bit system.
  ```c
  long int largeNum = 100000;
  ```

- **`long long`**: Used to store very large integers.
  - Typically 8 bytes (64 bits).
  - Range: `-9,223,372,036,854,775,808` to `9,223,372,036,854,775,807`.
  ```c
  long long int veryLargeNum = 1000000000000;
  ```

- **`unsigned` types**: These are used to store only positive integers (including zero).
  - **`unsigned int`**: For storing only positive integers.
  - **`unsigned short`**, **`unsigned long`**, **`unsigned long long`**: Similarly, these types store only positive values.

  ```c
  unsigned int positiveNum = 300;
  ```

#### **b. Floating-Point Types**:
These data types are used to store numbers with decimal points.

- **`float`**: Used to store single-precision floating-point numbers.
  - Typically 4 bytes (32 bits).
  - Range: Approximately `±3.4E−38 to ±3.4E+38` (up to 7 decimal digits of precision).
  ```c
  float pi = 3.14;
  ```

- **`double`**: Used to store double-precision floating-point numbers.
  - Typically 8 bytes (64 bits).
  - Range: Approximately `±1.7E−308 to ±1.7E+308` (up to 15 decimal digits of precision).
  ```c
  double piValue = 3.14159265359;
  ```

- **`long double`**: Used to store extended-precision floating-point numbers.
  - Typically 8 to 16 bytes (depends on the system).
  - Provides more precision than `double`.
  ```c
  long double precisePi = 3.141592653589793;
  ```

#### **c. Character Type**:
Used to store individual characters.

- **`char`**: Used to store a single character (like `A`, `b`, `7`, etc.).
  - Typically 1 byte (8 bits).
  - Can store values from `-128` to `127` (signed) or `0` to `255` (unsigned).
  ```c
  char letter = 'A';
  ```

- **`unsigned char`**: Used to store positive values between `0` and `255`.
  ```c
  unsigned char ch = 255;
  ```

#### **d. Boolean Type**:
C does not have a built-in `bool` type, but it can be mimicked using integer values.

- **`bool`** (from C99): C99 introduced the `_Bool` type, but in practice, `stdbool.h` header is often used to define `bool`, `true`, and `false`.
  ```c
  #include <stdbool.h>
  bool isTrue = true;
  ```

### **2. Modifiers for Data Types**
C allows **modifiers** to change the behavior of the data types. These modifiers adjust the storage size or the range of values that can be represented.

- **`signed`**: By default, integers are signed, meaning they can hold both positive and negative values.
  ```c
  signed int num = -10;
  ```

- **`unsigned`**: Specifies that the variable will only hold positive values (including zero).
  ```c
  unsigned int positiveNum = 20;
  ```

- **`long`**: Increases the size of the data type (e.g., `long int`, `long double`).
  ```c
  long int num = 100000;
  ```

- **`short`**: Decreases the size of the integer type.
  ```c
  short int smallNum = 100;
  ```

### **3. User-Defined Data Types**

C allows the creation of **user-defined types** using the `typedef` and `struct` keywords.

#### **a. `typedef`**:
`typedef` allows you to define a new name (alias) for an existing data type.

- Example:
  ```c
  typedef unsigned long ulong;
  ulong largeNum = 1000;  // Equivalent to unsigned long largeNum = 1000;
  ```

#### **b. `struct`**:
A **struct** is a collection of different data types (possibly of different sizes) grouped together under one name.

- Example:
  ```c
  struct Person {
      char name[50];
      int age;
      float height;
  };
  
  struct Person person1;
  person1.age = 25;
  person1.height = 5.9;
  ```

#### **c. `union`**:
A **union** allows storing different data types in the same memory location. Only one member of a union can hold a value at any given time.

- Example:
  ```c
  union Data {
      int i;
      float f;
      char str[20];
  };
  
  union Data data;
  data.i = 10;
  data.f = 220.5;  // Only `f` holds a value now, not `i` or `str`
  ```

#### **d. `enum`**:
An **enum** (enumeration) defines a set of named integer constants.

- Example:
  ```c
  enum Weekday {Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday};
  enum Weekday today = Wednesday;
  ```

### **4. Size of Data Types in C**
The size of data types in C is system-dependent, but here are the typical sizes:

| Data Type        | Size (in bytes)       |
|------------------|-----------------------|
| `char`           | 1 byte                |
| `int`            | 4 bytes (32-bit system)|
| `short`          | 2 bytes               |
| `long`           | 4 or 8 bytes          |
| `long long`      | 8 bytes               |
| `float`          | 4 bytes               |
| `double`         | 8 bytes               |
| `long double`    | 8 to 16 bytes         |

You can use the `sizeof` operator to determine the size of any data type or variable at runtime:
```c
printf("Size of int: %lu bytes", sizeof(int));
```

### **Summary of Common Data Types**:
| Data Type        | Description                         | Size (approx) | Range (for `signed` types)               |
|------------------|-------------------------------------|---------------|------------------------------------------|
| `int`            | Integer number                      | 4 bytes       | `-2,147,483,648` to `2,147,483,647`      |
| `short`          | Short integer                       | 2 bytes       | `-32,768` to `32,767`                    |
| `long`           | Long integer                        | 4 or 8 bytes  | `-2,147,483,648` to `2,147,483,647`      |
| `long long`      | Long long integer                   | 8 bytes       | `-9,223,372,036,854,775,808` to `9,223,372,036,854,775,807` |
| `float`          | Single-precision floating point     | 4 bytes       | `±3.4E−38 to ±3.4E+38`                  |
| `double`         | Double-precision floating point     | 8 bytes       | `±1.7E−308 to ±1.7E+308`                |
| `long double`    | Extended-precision floating point   | 8 to 16 bytes | More precision than `double`             |
| `char`           | Single character                    | 1 byte        | `-128` to `127` (or `0` to `255` for `unsigned`) |
| `bool` (C99)     | Boolean value (true/false)          | 1 byte        | `false` (0) or `true` (1)                |

