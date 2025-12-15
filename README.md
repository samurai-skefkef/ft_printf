*This project has been created as part of the 42 curriculum by soamraou*
# ft_printf
## Description

The ft_printf project is a reimplementation of the standard C library function printf. The goal of this project is to mimic the behavior of printf(), and understand the different type conversions (parsing).

## Instructions

To compile the library go into the repository where the files are in, run:
```
make
```
You'll notice this created a bunch of "files", specifically:
```
libftprintf.a
```
This static library is what you'll use when compiling your program:
```
cc main.c libftprintf.a
```
!!! But make sure you included the "ft_printf.h" header in your main.c code. !!!

## Ressources

* Youtube
* Geeksforgeeks: https://www.geeksforgeeks.org/c/variadic-functions-in-c/
**Chatgpt was Used for debugging and defining the perfect data type to use for pointers inside the function responsible for printing a pointer's addresse "ft_putpoint.c", also for debugging for the function responsible for printing in hexadecimal form "ft_putnbr_fd_hex.c"**

## Algorithm and Data Structure Choices
