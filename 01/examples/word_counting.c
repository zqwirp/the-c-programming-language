#include <stdio.h>
#define IN 1
#define OUT 0

void word_count() {
  int c, nl, nw, nc, state;

  state = OUT;
  nl = nw = nc = 0;

  while ((c = getchar()) != EOF) {
    ++nc;
    if (c == '\n') {
      ++nl;
    }
    if (c == ' ' || c == '\n' || c == '\t') {
      state = OUT;
    }
    else if (state == OUT) {
      state = IN;
      ++nw;
    }
  }

  printf("nlines: %d, nwords: %d, nchars: %d\n", nl, nw, nc);
}

int main() {
  word_count();
  return 0;
}
