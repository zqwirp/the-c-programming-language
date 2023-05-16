#include <stdio.h>
#define MAXLINE 1000

/* Exercise 1-16. Revise the main routine of the longest-line program,
  so it will correctly print the length of arbitrary long input lines,
  and as much as possible of the text. */
int getline(char line[], int maxline);
void copy(char to[], char from[]);

int main() {
  int len;
  int max;
  char line[MAXLINE];
  char longest[MAXLINE];

  max = 0;
  while ((len = getline(line, MAXLINE)) > 0) {

    if (len > max) {
      max = len;
      copy(longest, line);
    }
  }

  if (max > 0) {
    printf("the string: %s\n", longest);
    printf("the length: %d\n", max);
  } else {
    printf("duck you\n");
  }

  return 0;
}

int getline(char s[], int limit) {
  int c, i;

  for (i = 0; i < limit - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
    s[i] = c;
  }
  printf("stopped\n");

  if (c == '\n') {
    s[i++] = c;
  }
  s[i] = '\0';

  return i;
}

void copy(char to[], char from[]) {
  int i = 0;

  while ((to[i] = from[i]) != '\0')
    ++i;
}
