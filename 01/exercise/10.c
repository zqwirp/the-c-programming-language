#include <stdio.h>

/* Exercise 1-10. Write a program to copy its input to its output,
  replacing each tab by \t, each backspace by \b, and each backslash by \\.
  This makes tabs and backspaces visible in an unambiguous way. */
void replace();

int main() {
  replace();
  return 0;
}

void replace() {
  int c;

  while ((c = getchar()) != EOF) {
    switch (c) {
      case '\t':
        putchar('\\');
        putchar('t');
        break;
      case '\b':
        putchar('\\');
        putchar('b');
        break;
      case '\\':
        putchar('\\');
        putchar('\\');
        break;
      default:
        putchar(c);
    }
  }
}
