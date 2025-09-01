# ft_printf - Recreating the printf Function in C

## Table of Contents
- [Overview](#overview)
- [Features](#features)
- [Getting Started](#getting-started)
  - [Prerequisites](#prerequisites)
  - [Installation](#installation)
- [Usage](#usage)
- [Testing](#testing)

---

## Overview
`ft_printf` is a reimplementation of the standard C library function `printf`.  
The goal of this project is to understand formatted output functions by building one from scratch.  
It handles a variety of format specifiers, manages variable argument lists, and provides an efficient and modular way to output formatted data.

This project was developed as part of the 42 curriculum and serves as a foundational exercise in string formatting, variadic functions, and modular C programming.

---

## Features
✅ Supports basic format specifiers:
- `%c` → Print a single character  
- `%s` → Print a string  
- `%p` → Print a pointer address  
- `%d` / `%i` → Print signed decimal integer  
- `%u` → Print unsigned decimal integer  
- `%x` / `%X` → Print hexadecimal (lowercase / uppercase)  
- `%%` → Print a literal percent sign  

🛠️ Handles **variadic arguments** using `<stdarg.h>`  
💾 Efficient modular design with helper functions (`ft_putstr`, `ft_putnbr`, `ft_puthex`, etc.)  
🔧 Builds into a static library `libftprintf.a` for easy integration  

---

## Getting Started

### Prerequisites
Ensure you have the following installed:
- A C compiler (e.g., `gcc`, `clang`)
- `make` (GNU Make)

---

### Installation
Clone the repository:

```bash
git clone https://github.com/YOUR_USERNAME/ft_printf
cd ft_printf
Build the library:

bash
make
This will compile the source files and generate the static library:
libftprintf.a

Usage
Include the header in your C file:

#include "ft_printf.h"

Compile and link against libftprintf.a:

bash
gcc main.c libftprintf.a -o test
./test
Testing
You can create your own test file (e.g., main.c) to compare output against the standard printf.
