#include <stdio.h>

float fahr_to_celc(float fahr) {
  float celcius = (5.0 / 9.0) * (fahr - 32.0);
  printf("%3.0f\t%6.1f\n", fahr, celcius);
  return celcius;
}

int main() {
  float n = fahr_to_celc(22.2);
  printf("%.2f\n", n);
  return 0;
}