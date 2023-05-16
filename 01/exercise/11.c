#include <stdio.h>
#define IN 1
#define OUT 0

/* Exercise 1-11. How would you test the word count program? What kinds of input
  are most likely to uncover bugs if there are any?
  - No input
  - One line without enter
  - One line
  - Multiple line
  - One big word as input
  - Valid Inputs.
  - Boundary Condition Inputs.
  - Invalid Inputs. */
void word_count();

int main() {
  word_count();
  return 0;
}

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
    } else if (state == OUT) {
      state = IN;
      ++nw;
    }
  }

  printf("nlines: %d, nwords: %d, nchars: %d\n", nl, nw, nc);
}
