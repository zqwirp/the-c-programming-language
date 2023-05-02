#include <stdio.h>

void v_one() {
  int c = getchar();

  while (c != EOF) {
    putchar(c);
    c = getchar();
  }
}

void v_two() {
  int c;

  while ((c = getchar()) != EOF)
    putchar(c);
}

int main() {
  v_two();
  return 0;
}