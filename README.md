# Libft

Libft is a custom C library that reimplements standard C functions. This project was developed during my studies at Hive Helsinki Coding School in 2024. The library provides a collection of commonly used functions for string manipulation, memory management, and character checks.

## Features
This library includes implementations of the following functions:

### **Character & String Manipulation**
- `ft_isalpha.c` - Checks if a character is an alphabetic letter.
- `ft_isdigit.c` - Checks if a character is a digit.
- `ft_isalnum.c` - Checks if a character is alphanumeric.
- `ft_isascii.c` - Checks if a character is an ASCII character.
- `ft_isprint.c` - Checks if a character is printable.
- `ft_tolower.c` - Converts a character to lowercase.
- `ft_toupper.c` - Converts a character to uppercase.
- `ft_strlen.c` - Computes the length of a string.
- `ft_strdup.c` - Duplicates a string.
- `ft_strchr.c` - Finds a character in a string.
- `ft_strrchr.c` - Finds the last occurrence of a character in a string.
- `ft_strncmp.c` - Compares two strings.
- `ft_strnstr.c` - Finds a substring within a string.
- `ft_strlcpy.c` - Copies a string with size limitations.
- `ft_strlcat.c` - Concatenates two strings with size limitations.
- `ft_strjoin.c` - Joins two strings.
- `ft_strtrim.c` - Trims characters from the beginning and end of a string.
- `ft_split.c` - Splits a string into an array of substrings.
- `ft_substr.c` - Extracts a substring from a string.
- `ft_strmapi.c` - Applies a function to each character of a string.
- `ft_striteri.c` - Applies a function to each character of a string with its index.

### **Memory Management**
- `ft_memset.c` - Fills a block of memory with a specific value.
- `ft_memcpy.c` - Copies memory from one location to another.
- `ft_memmove.c` - Moves memory safely between locations.
- `ft_memchr.c` - Searches for a byte in memory.
- `ft_memcmp.c` - Compares memory blocks.
- `ft_calloc.c` - Allocates and zeroes out memory.
- `ft_bzero.c` - Zeros out memory.

### **Number & Output Functions**
- `ft_atoi.c` - Converts a string to an integer.
- `ft_itoa.c` - Converts an integer to a string.
- `ft_putchar_fd.c` - Outputs a character to a file descriptor.
- `ft_putstr_fd.c` - Outputs a string to a file descriptor.
- `ft_putendl_fd.c` - Outputs a string followed by a newline to a file descriptor.
- `ft_putnbr_fd.c` - Outputs a number to a file descriptor.

## Compilation
The library is compiled using the provided `Makefile`. To build the library, run:

```sh
make
```

To clean up object files:

```sh
make clean
```

To remove all compiled files:

```sh
make fclean
```

To recompile everything:

```sh
make re
```

## Usage
To use this library in your C projects, include `libft.h` and link the compiled `libft.a` file:

```c
#include "libft.h"
```

Compile your project with:

```sh
gcc your_file.c -L. -lft -o your_program
```

## License
This project is released under the MIT License.

## Author
Created by Roman Bogoudinov during Hive Helsinki studies in 2024.

