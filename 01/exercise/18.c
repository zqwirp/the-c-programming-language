/* Exercise 1-18. Write a program to remove trailing blanks
  and tabs from each line of input, and to delete entirely blank lines. */

#include <stdio.h>
#define MAXLINE 1000

int getline(char s[]);

int main() {
  int len;
  char line[MAXLINE];

  while ((len = getline(line)) > 0) {
    if (len != 1) {
      printf("%s\n", line);
    }
  }
}

int getline(char s[]) {
  int c;
  int i = 0;

  while (i < MAXLINE - 1 && (c = getchar()) != EOF && c != '\n') {
    if (c == ' ' || c == '\t') {
      continue;
    }
    s[i++] = c;
  }

  if (c == '\n') {
    if (i == 0) {
      return 1;
    } else {
      s[i++] = '\0';
    }
  }

  return i;
}