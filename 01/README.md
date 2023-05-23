# An Introduction

## Unsolved Exercises

- on progress

## Variables and Arithmetic Expressions

Write a program that prints a table of Fahrenheit temperatures and their Celsius equivalents. [print_temperature.c](/01/examples/print_temperature.c)

## Symbolic Constants

> A `#define` line defines a symbolic name or symbolic constant to be a particular string of characters
>
> ```c
> #define NAME replacement_list
> ```

## Character Input and Output

> The standard library provides several functions for reading or writing one character at a time, of which getchar and putchar are the simplest. Each time it is called, getchar reads the next input character from a text stream and returns that as its value. That is, after
>
> ```c
> c = getchar(); // read a character
> putchar(c); // print the character
> ```
>
> the variable c contains the next character of input. The characters normally come from the keyboard; input from files is discussed in [Chapter 7](https://kremlin.cc/k&r.pdf).

Example: [file_copy.c](/01/examples/file_copy.c)

Here is a link to a resource that provides a brief explanation of why the type of 'c' is 'int' rather than 'char':

- [https://stackoverflow.com/questions/7119470/int-c-getchar?noredirect=1&lq=1](https://stackoverflow.com/questions/7119470/int-c-getchar?noredirect=1&lq=1)
- [https://stackoverflow.com/questions/32720934/confusion-about-int-char-and-eof-in-c](https://stackoverflow.com/questions/32720934/confusion-about-int-char-and-eof-in-c)
- [https://stackoverflow.com/questions/8464030/using-int-for-character-types-when-comparing-with-eof?noredirect=1&lq=1](https://stackoverflow.com/questions/8464030/using-int-for-character-types-when-comparing-with-eof?noredirect=1&lq=1)
- [https://stackoverflow.com/questions/8932582/how-can-i-generate-an-eof-or-an-ascii-0-in-a-visual-studio-debug-console](https://stackoverflow.com/questions/8932582/how-can-i-generate-an-eof-or-an-ascii-0-in-a-visual-studio-debug-console)
- [https://www.includehelp.com/c/value-of-eof-in-c-programming-language.aspx](https://www.includehelp.com/c/value-of-eof-in-c-programming-language.aspx)

In summary, the type of 'c' is 'int' because the value of 'EOF' is -1, which is outside the range of 'char'.

`EOF` is a **predefined constant** in the standard library of C, which is commonly **defined as -1**. Therefore, the condition `(c = getchar()) != EOF` means "while `getchar()` does not return the value -1".

### `getchar() != EOF` value

The value from the expression `getchar() != EOF` after working with exercise 6 is found to be 1 if it evaluates to true.

---
