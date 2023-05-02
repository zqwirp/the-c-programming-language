#include <stdio.h>

int main()
{
  int c, i, nblanks, nothers;
  int ndigits[10];

  nblanks = nothers = 0;
  for (i = 0; i < 10; ++i)
    ndigits[i] = 0;

  while ((c = getchar()) != EOF)
  {
    if (c >= '0' && c <= '9')
      ++ndigits[c - '0'];
    else if (c == ' ' || c == '\n' || c == '\t')
      ++nblanks;
    else
      ++nothers;
  }

  printf("digits =");
  for (i = 0; i < 10; ++i)
    printf(" %d", ndigits[i]);

  printf(", blanks = %d, others = %d\n", nblanks, nothers);

  return 0;
}
