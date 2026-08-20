# Design and Implementation of a Configurable Logging and Debugging System Using C Preprocessor Directives

## 📌 Project Overview

This project demonstrates the design and implementation of a **configurable logging and debugging system in C** using **C Preprocessor Directives**.

The main purpose of this project is to understand how preprocessor directives such as `#define`, `#ifdef`, `#ifndef`, `#if`, `#else`, and `#endif` can be used to control debugging and logging features during compilation.

The system allows different logging levels to be enabled or disabled without modifying the main application logic.

---

## 🎯 Objectives

* Understand the working of the C preprocessor.
* Use preprocessor directives for conditional compilation.
* Implement configurable logging levels.
* Enable or disable debugging messages during compilation.
* Reduce unnecessary debugging code in production builds.
* Understand how macros can simplify logging operations.
* Practice modular programming using multiple `.c` and `.h` files.
* Use a `Makefile` to compile and manage the project.

---

## 🛠️ Technologies Used

* **Programming Language:** C
* **Compiler:** GCC / CC
* **Operating System:** Linux
* **Build Tool:** Make
* **Concepts:**

  * C Preprocessor
  * Macros
  * Conditional Compilation
  * Header Files
  * File Handling
  * Modular Programming
  * Makefile

---

## 📂 Project Structure

```text
C-Preprocessor-Logging-System/
│
├── preprocessor.c
├── include.c
├── define.c
├── header.h
├── Makefile
├── README.md
│
└── test files
```

> The file names can be modified according to the final implementation of the project.

---

## 🔧 Preprocessor Directives Used

The project makes use of important C preprocessor directives:

### `#define`

Used to define macros and configuration values.

```c
#define DEBUG
```

### `#ifdef`

Used to compile code only when a particular macro is defined.

```c
#ifdef DEBUG
printf("Debug message\n");
#endif
```

### `#ifndef`

Used to check whether a macro has not been defined.

```c
#ifndef DEBUG
printf("Debugging disabled\n");
#endif
```

### `#if`, `#else`, and `#endif`

These directives can be used to select different code during compilation.

```c
#if LOG_LEVEL >= 2
printf("Information message\n");
#endif
```

---

## 📝 Logging Levels

The logging system can be configured using different levels.

| Level   | Description                    |
| ------- | ------------------------------ |
| ERROR   | Displays error messages        |
| WARNING | Displays warning messages      |
| INFO    | Displays general information   |
| DEBUG   | Displays debugging information |

For example:

```c
LOG_ERROR("File open failed");
LOG_WARNING("Invalid input");
LOG_INFO("Program started");
LOG_DEBUG("Variable value checked");
```

The required logging levels can be enabled or disabled using preprocessor configuration.

---

## ⚙️ How the System Works

The basic working flow is:

```text
Source Code
     ↓
Preprocessor
     ↓
Conditional Compilation
     ↓
Selected Logging Code
     ↓
Compiler
     ↓
Executable
```

During compilation, the preprocessor evaluates the configured macros and removes unwanted sections of code before the compiler processes the source code.

This makes it possible to create different builds such as:

```text
Debug Build
    ↓
ERROR + WARNING + INFO + DEBUG

Production Build
    ↓
ERROR + WARNING
```

---

## 🏗️ Compilation

Compile the project using the Makefile:

```bash
make
```

This generates the required object files and executable.

Example:

```text
gcc -c preprocessor.c
gcc -c include.c
gcc -c define.c
gcc preprocessor.o include.o define.o -o my_preprocessor
```

---

## ▶️ Running the Program

After compilation:

```bash
./my_preprocessor
```

If the project accepts a source file as a command-line argument:

```bash
./my_preprocessor abc.c
```

The generated output can be stored in an intermediate file such as:

```text
abc.i
```

---

## 🧹 Cleaning the Project

The Makefile contains a `clean` target:

```bash
make clean
```

This removes generated object files and executable files.

For example:

```text
preprocessor.o
include.o
define.o
my_preprocessor
abc.i
```

---

## 💡 Advantages

* Easy to configure.
* No need to manually remove debugging statements.
* Debugging code can be enabled during development.
* Logging can be disabled for production builds.
* Improves code maintainability.
* Demonstrates practical use of conditional compilation.
* Helps reduce unnecessary runtime logging.

---

## 🚀 Future Enhancements

The project can be extended with:

* Multiple configurable log levels.
* Log messages with timestamps.
* Log messages with source file and line number.
* Logging to external files.
* Color-coded terminal messages.
* Runtime log-level configuration.
* Separate debug and release builds.
* Error codes and detailed error reporting.

---

## 📚 Concepts Learned

Through this project, the following concepts are practiced:

* C Preprocessor
* Macros
* Conditional Compilation
* Header Files
* Source Files
* Compilation Process
* Object Files
* Makefile
* Command Line Arguments
* Modular Programming
* Debugging and Logging

---

## 👨‍💻 Author

**B. Hari Prakash**

B.Tech – Electronics and Communication Engineering

---

## 📜 License

This project is created for **educational and learning purposes**.
