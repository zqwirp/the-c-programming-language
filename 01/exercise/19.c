/* Exercise 1-19. Write a function reverse(s) that reverses the character string s.
  Use it to write a program that reverses its input a line at a time. */
#include <stdio.h>
#define MAXLINE 1000

int getline(char s[]);
void revline(char *s, int len);

int main() {
  int len;
  char line[MAXLINE];

  while ((len = getline(line)) > 0) {
    revline(line, len);
    printf("%s\n", line);
  }

  return 0;
}

void revline(char *s, int len) {
  int l = len - 1;
  char tmp;

  for (int i = 0; i < (l / 2); i++) {
    tmp = s[l - i];
    s[l - i] = s[i];
    s[i] = tmp;
  }
}

int getline(char *s) {
  int c, i;

  for (i = 0; i < MAXLINE - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
    s[i] = c;
  }

  s[i] = '\0';

  return i;
}

