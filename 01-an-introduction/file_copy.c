#include <stdio.h>

void file_copy() {
  int c;

  while ((c = getchar()) != EOF) {
    putchar(c);
  }
}

int main() {
  file_copy();
  return 0;
}