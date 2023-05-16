#include <stdio.h>

/* Write a program to count blanks, tabs, and newlines. */
void counter();

int main() {
  counter();
  return 0;
}

void counter() {
  int c;

  int s = 0;
  int t = 0;
  int n = 0;

  while ((c = getchar()) != EOF) {
    if (c == ' ')
      ++s;
    if (c == '\t')
      ++t;
    if (c == '\n')
      ++n;
  }

  printf("blanks :%d\n", s);
  printf("tabs :%d\n", t);
  printf("new lines :%d\n", n);
}