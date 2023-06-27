#include <stdio.h>
#define MAXLINE 1000

int getline(char line[], int max) {
  int c, i;

  // max = 1000
  // max - 1 = 999
  // i < 999 which until 998 because 999 must be \0
  for (i = 0; i < max - 1 && (c = getchar()) != EOF && c != '\n'; i++) {
    line[i] = c;
  }

  if (c == '\n') {  // this line will keep \n included because in for expression \n is excluded
    line[i++] = c;
  }

  line[i] = '\0';  // place null at the end

  return i;
}

void copy_line(char to[], char from[]) {
  int i = 0;

  while (from[i]) {
    to[i] = from[i];
    i++;
  }
}

int main() {
  char line[MAXLINE];
  char longest[MAXLINE];
  int len;
  int max = 0;

  while ((len = getline(line, MAXLINE)) > 0) {
    if (len > max) {
      max = len;
      copy_line(longest, line);
    }
  }

  if (max > 0) {
    printf("%s", longest);
  }

  return 0;
}
