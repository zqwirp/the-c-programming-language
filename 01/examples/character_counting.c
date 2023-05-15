#include <stdio.h>

void char_count() {
  int nc = 0;

  while (getchar() != EOF)
    ++nc;

  printf("%d\n", nc);
}

int main() {
  char_count();
  return 0;
}
