<!-- Language Switch -->
<div align="center">

[Lire en Français](./README_FR.md)

</div>

# ft_printf

> 📄 Official subject: [ft_printf_subject.pdf](https://github.com/Naddy22/ft_printf/blob/master/ft_printf_subject.pdf)

## Project Description

**ft_printf** is a 42 school project whose goal is to **reproduce the standard C library function `printf`**.
It helps you deeply understand:

* Variadic arguments handling (`va_list`, `va_start`, `va_arg`, `va_end`)
* String manipulation and numeric conversions
* Writing modular and maintainable functions

This version includes:

* ✅ **Mandatory** conversions: `%c`, `%s`, `%p`, `%d`, `%i`, `%u`, `%x`, `%X`, `%%`
* ✅ Output to **standard output**
* ✅ Return the **number of printed characters**
* ✅ A `Makefile`, a `ft_printf.h`, and several `.c` files
* ❌ No **bonus** part

---

## Learning Objectives

* Implement a simplified version of `printf`
* Handle **variadic arguments**
* Improve **code modularity**
* Convert **numbers to strings**
* Return the **number of printed characters**
* Write a **Makefile following the 42 standard**

---

## Supported Conversions

| Conversion  | Description                           |
| ----------- | ------------------------------------- |
| `%c`        | Print a character                     |
| `%s`        | Print a string                        |
| `%p`        | Print a memory address in hexadecimal |
| `%d` / `%i` | Print a signed integer                |
| `%u`        | Print an unsigned integer             |
| `%x`        | Print a hexadecimal (lowercase)       |
| `%X`        | Print a hexadecimal (uppercase)       |
| `%%`        | Print a percent sign                  |

---

## Project Structure

All files are at the **root of the repository**:

```
.
├── ft_printf.c
├── ft_printf.h
├── ft_check_pourcent.c
├── ft_putchar.c
├── ft_putstr.c
├── ft_putnbr.c
├── ft_putnbr_unsigned.c
├── ft_putnbr_base.c
├── ft_strchr.c
├── ft_strlen.c
├── Makefile
```

> Each conversion is handled in a dedicated function for better readability.

---

## Installation

### Clone the repository

```bash
git clone https://github.com/Naddy22/ft_printf.git
cd ft_printf
```

### Compile the library

```bash
make
```

This generates:

* `libftprintf.a` → static library
* `.o` → object files

---

## Makefile Commands

| Command             | Description                               |
| ------------------- | ----------------------------------------- |
| `make` / `make all` | Compile and create `libftprintf.a`        |
| `make clean`        | Remove `.o` files                         |
| `make fclean`       | Remove `.o` files **and** `libftprintf.a` |
| `make re`           | Full recompile from scratch               |

> Compiled with `-Wall -Wextra -Werror` (42 standard).

---

## Using in Another Project

### Include the header

```c
#include "ft_printf.h"
```

### Compile with the library

```bash
gcc my_program.c -L /path/to/ft_printf -lftprintf -I /path/to/ft_printf
```

Explanation:

* `-L` : folder containing `libftprintf.a`
* `-lftprintf` : link with the library
* `-I` : path to `ft_printf.h`

---

## Compile and run a test main

A simple test main is commented inside `ft_printf.c`.
You can uncomment tests or write your own main file.

```bash
gcc ft_printf.c -L . -lftprintf -I .
./a.out
```

---

## Norminette / Code Style

This project follows the **42 Norm**:

* Maximum **25 lines per function**
* **4 spaces indentation**
* **No line longer than 80 characters**
* **No deep nesting** (no more than 5 levels of `if`, `while`, etc.)
* **Clear and consistent variable/function names**
* **No unused variables**
* **No unused functions or dead code**
* **Useful and clear comments**
* **Correct NULL and error handling**
* **Proper header structure** (1 function per file if possible, clean includes)

> All functions were checked with `norminette` to ensure compliance and avoid compilation or interpretation issues.
