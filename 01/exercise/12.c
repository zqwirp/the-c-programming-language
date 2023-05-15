#include <stdio.h>
#define IN 1
#define OUT 0

// Write a program that prints its input one word per line.
void e_12() {
  int c, nw, state;
  nw = 0;
  state = OUT;

  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\n' || c == '\t') {
      if (state == IN) {
        state = OUT;
        putchar('\n');
      }
    }
    else {
      if (state == OUT) {
        state = IN;
        ++nw;
      }
      putchar(c);
    }
  }
}

int main() {

  return 0;
}