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

**Chatgpt was Used for debugging and defining the perfect data type to use for pointers inside the function responsible for printing a pointer "ft_putpoint.c", also for debugging for the function responsible for printing in hexadecimal form "ft_putnbr_fd_hex.c"**
  
## Algorithm and Data Structure Choices
**ft_printf:**

ft_printf is the main function that replicates the behavior of the standard printf. It takes a format string and a variable number of arguments. It iterates through the format string character by character: if a character is not %, it is printed directly; if a % is found, the next character determines the type of argument to print. Based on this type, ft_printf calls the appropriate helper function and keeps a running count of all characters printed, which it returns at the end.
      **Supported conversions:**
          
```
%c : Print a single character
%s : Print a string
%p : Print a pointer address in hexadecimal format
%d / %i : Print a signed decimal integer
%u : Print an unsigned decimal integer
%x : Print a hexadecimal number (lowercase)
%X : Print a hexadecimal number (uppercase)
%% : Print a percent sign
```

  **ft_convert:**
  
    ft_convert is a helper function used by ft_printf to handle format specifiers. Given a format character (like 'd', 's', 'p', etc.) and a va_list of arguments, it selects the appropriate printing function to handle that argument type. For example, it calls ft_putchar_fd for characters, ft_putstr_fd for strings, ft_putnbr_fd for integers, ft_putunbr_fd for unsigned integers, ft_putnbr_fd_hex for hexadecimal numbers, and ft_putpoint for pointers. It returns the number of characters printed for that argument.    
