#include <stdio.h>

#define TOTAL_CHARS 128

/* Exercise 1-14. Write a program to print a histogram of the frequencies
  of different characters in its input. */
void print_histogram();

int main(void) {
  print_histogram();
  return 0;
}

void print_histogram() {
  int c, i, j;

  int _char[TOTAL_CHARS];

  for (i = 0; i < TOTAL_CHARS; ++i) {
    _char[i] = 0;
  }

  while ((c = getchar()) != EOF) {
    _char[c] = _char[c] + 1;
  }

  for (i = 0; i < TOTAL_CHARS; ++i) {
    putchar(i);

    for (j = 0; j < _char[i]; ++j)
      putchar('*');

    putchar('\n');
  }
}