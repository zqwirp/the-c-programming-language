#include <stdio.h>
#define MAXLINE 1000

int get_line(char line[], int limit) {
  int c, i;

  for (i = 0; i < limit - 1 && (c = getchar()) != EOF && c != '\n'; i++) {
    line[i] = c;
  }

  if (c == '\n') {
    line[i++] = c;
  }

  line[i] = '\0';

  return i;
}

void copy_line(char to[], char from[]) {
  int i = 0;

  while ((to[i] = from[i]) != '\0') {
    i++;
  }
}


int main() {
  char line[MAXLINE];
  char longest[MAXLINE];
  int len;
  int max = 0;

  while ((len = get_line(line, MAXLINE)) > 0) {
    if (len > max) {
      max = len;
      copy_line(longest, line);
    }
  }

  if (max > 0) {
    printf("%s\n", longest);
  }

  return 0;
}
