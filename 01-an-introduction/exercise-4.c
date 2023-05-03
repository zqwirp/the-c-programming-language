#include <stdio.h>
#define LOWER 0
#define UPPER 100
#define STEP 12.5
#define CELC_TO_FAHR(c) (9.0 / 5.0) * c + 32.0

// Exercise 4. Write a program to print the corresponding Celsius to Fahrenheit table.
void print_temperature() {
  float celc;

  printf("%6s %12s\n", "Celc", "Fahr");

  printf("%6s %12s\n", "----", "----");

  for (celc = LOWER; celc <= UPPER; celc += STEP) {
    printf("%6.2f %12.2f\n", celc, CELC_TO_FAHR(celc));
  }
}

int main() {
  print_temperature();
  return 0;
}