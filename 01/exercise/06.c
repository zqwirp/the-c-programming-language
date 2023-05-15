#include <stdio.h>

void verify_eof() {
  int c;
  while ((c = getchar()) != EOF) {
    printf(("%d"), c != EOF);
  }
}

int main() {
  verify_eof();
  return 0;
}