#include <stdio.h>

void print_eof() {
  int c = getchar() != EOF;
  printf("getchar value is %d\n", c);
  printf("EOF value is %d\n", EOF);
}

int main() {
  print_eof();
  return 0;
}