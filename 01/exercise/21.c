/* Exercise 1-21. Write a program entab that replaces strings of blanks
  by the minimum number of tabs and blanks to achieve the same spacing.
  Use the same tab stops as for detab. When either a tab or a single blank
  would suffice to reach a tab stop, which should be given preference? */

#include <stdio.h>
#define MAXLINE 1000
#define ENTAB 8

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
  int c, i, b, j;
  char temp[MAXLINE];

  b = 0;
  j = 0;
  for (i = 0; i < MAXLINE - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
    if (c == ' ') {
      temp[b++] = c;
      if (b == ENTAB) {
        s[j++] = 'X';
        b = 0;
      }
    } else {
      while (b > 0) {
        s[j++] = temp[0];
        --b;
      }
      s[j++] = c;
    }
  }

  if (b > 0) {
    while (b > 0) {
      s[j++] = temp[0];
      --b;
    }
  }

  if (c == '\n') {
    s[j++] = c;
  }

  s[j] = '\0';

  return j;
}