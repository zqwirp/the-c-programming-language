#include <stdio.h>

int power(int base, int n);

int main()
{
  int res = power(2, 5);
  printf("hi mom!\n");
  printf("res = %d\n", res);
  return 0;
}

int power(int base, int n)
{
  int i, p;

  p = 1;
  for (i = 1; i <= n; ++i)
  {
    p = p * base;
  }

  return p;
}
