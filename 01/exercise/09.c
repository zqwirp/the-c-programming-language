#include <stdio.h>

/* Write a program to copy its input to its output,
  replacing each string of one or more blanks by a single blank. */
void copy_io();

int main() {
  copy_io();
  return 0;
}

void copy_io() {
  int c;
  int s = 0;

  while ((c = getchar()) != EOF) {
    if (c == ' ') {
      if (s == 0) {
        putchar(c);
      }
      ++s;
    } else {
      s = 0;
    }

    if (c != ' ') {
      putchar(c);
    }
  }
}