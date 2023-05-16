#include <stdio.h>
#define MINLINE 80
#define MAXLINE 1000

int getline(char s[], int limit);
void copy(char to[], char from[]);

// Write a program to print all input lines that are longer than 80 characters.
int main() {
  int len;
  char line[MAXLINE];
  char longest[MAXLINE];

  while ((len = getline(line, MAXLINE)) > 0) {
    if (len > MINLINE) {
      printf("the string: %s\n", line);
    } else {
      printf("duck you\n");
    }
  }
  return 0;
}

int getline(char s[], int limit) {
  int c, i;

  for (i = 0; i < limit - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
    s[i] = c;
  }

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
