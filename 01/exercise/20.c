/* Exercise 1-20. Write a program detab that replaces tabs in the input
  with the proper number of blanks to space to the next tab stop.
  Assume a fixed set of tab stops, say every n columns.
  Should n be a variable or a symbolic parameter? */

#include <stdio.h>
#define MAXLINE 1000
#define DETAB 4

int getline(char s[]);

int main() {
  int len;
  char line[MAXLINE];

  while ((len = getline(line)) > 0) {
    printf("%s", line);
  }

  return 0;
}

int getline(char s[]) {
  int c, i;

  for (i = 0; i < MAXLINE - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
    // detab
    if (c == '\t') {
      for (int j = 0; j < DETAB; j++) {
        s[i] = '.';
        if (j < 3) {
          i++;
        }
      }
    } else {
      s[i] = c;
    }
  }

  if (c == '\n') {
    s[i++] = c;
  }
  s[i] = '\0';

  return i;
}