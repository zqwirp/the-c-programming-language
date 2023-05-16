#include <stdio.h>
#define MAXLEN 10
#define IN 1
#define OUT 0

/* Exercise 1-13. Write a program to print a histogram of the lengths of words in its input.
  It is easy to draw the histogram with the bars horizontal;
  a vertical orientation is more challenging. */

void horizontal_bars();

int main() {
  horizontal_bars();
  return 0;
}

void horizontal_bars() {
  int c, state;
  int i, j;
  int histo[MAXLEN + 1];
  int counter;

  for (i = 0; i < MAXLEN + 1; ++i)
    histo[i] = 0;

  state = OUT;
  counter = 0;
  while ((c = getchar()) != EOF)
    if (c == ' ' || c == '\n' || c == '\t') {
      if (state == IN && counter > 0) {
        if (counter - 1 < MAXLEN)
          ++histo[counter - 1];
        else
          ++histo[MAXLEN];
      }
      state = OUT;
      counter = 0;
    } else {
      ++counter;
      if (state == OUT)
        state = IN;
    }

  for (i = 0; i < MAXLEN; ++i) {
    if (MAXLEN < 10)
      printf(" %1d | ", i + 1);
    else if (MAXLEN < 100)
      printf(" %2d |", i + 1);
    else
      printf(" %3d |", i + 1);
    for (j = 0; j < histo[i]; ++j)
      putchar('*');
    putchar('\n');
  }
  if (MAXLEN < 10)
    printf(">%1d |", i);
  else if (MAXLEN < 100)
    printf(">%2d |", i);
  else
    printf(">%3d |", i);
  for (j = 0; j < histo[i]; ++j)
    putchar('*');
  putchar('\n');
}