#include <stdio.h>

void fahr_to_celc(int lower, int upper, int step);
void celc_to_fahr(float lower, float upper, float step);

int main()
{
  fahr_to_celc(0, 300, 20);
  printf("\n------------------\n\n");
  celc_to_fahr(0, 120, 12);
  return 0;
}

void fahr_to_celc(int l, int u, int s)
{
  int fahr;
  float celc;

  printf("%6s\t%12s\n", "Fahr", "Celc");
  printf("%6s\t%12s\n", "------", "------");

  for (fahr = l; fahr <= u; fahr += s)
  {
    celc = (5.0 / 9.0) * (fahr - 32.0);
    printf("%6d\t%12.2f\n", fahr, celc);
  }
}

void celc_to_fahr(float l, float u, float s)
{
  float celc;
  float fahr;

  printf("%6s\t%12s\n", "Celc", "Fahr");
  printf("%6s\t%12s\n", "------", "------");

  for (celc = l; celc < u; celc += s)
  {
    fahr = (celc * (9.0 / 5.0)) + 32.0;
    printf("%6.2f\t%12.2f\n", celc, fahr);
  }
}
