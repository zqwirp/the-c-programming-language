#include <stdio.h>
#include <stdlib.h>

#define IN 1
#define OUT 0

float e_15(float fahr)
{
  float celcius = (5.0 / 9.0) * (fahr - 32.0);
  printf("%3.0f\t%6.1f\n", fahr, celcius);
  return celcius;
}

void e_12()
{
  int c, nw, state;
  nw = 0;
  state = OUT;

  while ((c = getchar()) != EOF)
  {
    if (c == ' ' || c == '\n' || c == '\t')
    {
      if (state == IN)
      {
        state = OUT;
        putchar('\n');
      }
    }
    else
    {
      if (state == OUT)
      {
        state = IN;
        ++nw;
      }
      putchar(c);
    }
  }
}

void e_10()
{
  int c;

  while ((c = getchar()) != EOF)
  {
    switch (c)
    {
    case '\t':
      putchar('\\');
      putchar('t');
      break;
    case '\b':
      putchar('\\');
      putchar('b');
      break;
    case '\\':
      putchar('\\');
      putchar('\\');
      break;
    default:
      putchar(c);
    }
  }
}

void e_9()
{
  int c;
  int s = 0;

  while ((c = getchar()) != EOF)
  {
    if (c == ' ')
    {
      if (s == 0)
      {
        putchar(c);
      }
      ++s;
    }
    else
    {
      s = 0;
    }

    if (c != ' ')
    {
      putchar(c);
    }
  }
}

void e_8()
{
  int c;

  int s = 0;
  int t = 0;
  int n = 0;

  while ((c = getchar()) != EOF)
  {
    if (c == ' ')
      ++s;
    if (c == '\t')
      ++t;
    if (c == '\n')
      ++n;
  }

  printf("blanks :%d\n", s);
  printf("tabs :%d\n", t);
  printf("new lines :%d\n", n);
}

void e_6()
{
  int c = getchar() != EOF;

  printf("%d\n", c);

  printf("%d\n", EOF);
}

int main()
{
  e_10();
  return 0;
}
