*This activity has been created as part of the 42 curriculum by sbadandi.*

# ft_printf

## Description

`ft_printf` is a from-scratch reimplementation of the C standard library function `printf`. The goal of the project is to learn how variadic functions work in C and to build a small, well-structured formatting engine without relying on the standard `printf` family.

The project compiles into a static library, `libftprintf.a`, exposing a single function:

```c
int ft_printf(const char *format, ...);
```

It writes to standard output and returns the number of characters printed, like the original.

### Supported conversions

| Specifier | Output |
|-----------|--------|
| `%c` | A single character |
| `%s` | A string |
| `%p` | A pointer address in hexadecimal |
| `%d` / `%i` | A signed decimal integer |
| `%u` | An unsigned decimal integer |
| `%x` | An unsigned hexadecimal integer (lowercase) |
| `%X` | An unsigned hexadecimal integer (uppercase) |
| `%%` | A literal percent sign |

### How it works

1. `ft_printf` initializes a `va_list` with `va_start`.
2. It walks through the format string one character at a time.
3. Ordinary characters are written directly to standard output.
4. When a `%` is found, the next character selects the conversion, and the matching argument is fetched with `va_arg` and printed by a dedicated helper function.
5. The number of characters written is accumulated and returned, and the `va_list` is released with `va_end`.

## Instructions

### Compilation

Build the library with the provided Makefile:

```sh
make
```

This produces `libftprintf.a` in the project root.

Other Makefile rules:

```sh
make clean    # remove object files
make fclean   # remove object files and libftprintf.a
make re       # fclean, then rebuild
```

### Usage

Include the header in your code and link against the library:

```c
#include "ft_printf.h"

int main(void)
{
	ft_printf("Hello, %s! You are number %d.\n", "world", 42);
	return (0);
}
```

```sh
cc -Wall -Wextra -Werror main.c -L. -lftprintf -o test
./test
```

## Resources

- `man 3 printf` and `man 3 stdarg`: reference for the behavior being reproduced and for variadic arguments.
- *The C Programming Language* by Kernighan and Ritchie: chapter on variadic functions.
- The 42 `ft_printf` subject PDF.

### Use of AI

AI was used only to help draft this README and chacked by me . It was not used to write the project's code.
