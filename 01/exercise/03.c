#include <stdio.h>
#define LOWER 0
#define UPPER 300
#define STEP 20
#define FAHR_TO_CELCIUSE(f) (5.0 / 9.0) * (f - 32.0)

// Exercise 3. Modify the temperature conversion program to print a heading above the table.
void print_temperature() {
  float fahr;

  printf("%6s %12s\n", "Fahr", "Celc");

  printf("%6s %12s\n", "----", "----");

  for (fahr = LOWER; fahr <= UPPER; fahr += STEP) {
    printf("%6.2f %12.2f\n", fahr, FAHR_TO_CELCIUSE(fahr));
  }
}

int main() {
  print_temperature();
  return 0;
}