#include <stdio.h>

void line_count() {
  int c;
  int nl = 0;

  while ((c = getchar()) != EOF) {
    if (c == '\n')
      ++nl;
  }

  printf("%d\n", nl);
}

int main() {
  line_count();
  return 0;
}
