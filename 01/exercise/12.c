#include <stdio.h>
#define IN 1
#define OUT 0

/* Exercise 1-12. Write a program that prints its input one word per line. */
void prints_input();

int main() {
  prints_input();
  return 0;
}

void prints_input() {
  int c, nw, state;
  nw = 0;
  state = OUT;

  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\n' || c == '\t') {
      if (state == IN) {
        state = OUT;
        putchar('\n');
      }
    } else {
      if (state == OUT) {
        state = IN;
        ++nw;
      }
      putchar(c);
    }
  }
}