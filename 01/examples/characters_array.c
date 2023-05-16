#include <stdio.h>
#define MAXLINE 1000

int getline(char line[], int maxline);
void copy(char to[], char from[]);

int main() {
  int len;
  int max;
  char line[MAXLINE];
  char longest[MAXLINE];

  max = 0;
  // While there's another line
  // The > 0 expression is to make sure it's exit the loop if EOF
  while ((len = getline(line, MAXLINE)) > 0) {
    // If current len > max copy line to longest
    if (len > max) {
      max = len;
      copy(longest, line);
    }
  }

  if (max > 0) {
    printf("%s\n", longest);
  } else {
    printf("duck you\n");
  }

  return 0;
}

int getline(char s[], int limit) {
  int c, i;

  // Loop happened here
  for (i = 0; i < limit - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
    s[i] = c;
  }
  printf("stopped\n");

  // Handle new line
  // to add newline at the end because terminated
  // increment index for null character
  if (c == '\n') {
    s[i++] = c;
  }
  s[i] = '\0';

  return i;
}

void copy(char to[], char from[]) {
  int i = 0;

  while ((to[i] = from[i]) != '\0') // ???
    ++i;
}