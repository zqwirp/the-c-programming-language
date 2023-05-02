#include <stdio.h>
#include <string.h>


char *reverse (char *astring) {
  char tmp;
  int i;
  int len = strlen(astring);

  for (i = 0; i < len/2; ++i) {
    tmp = astring[i];
    astring[i] = astring[len - i - 1];
    astring[len - i - 1] = tmp;
  }

  printf("string lenght = %d\n", len);
  return astring;
}

int main()
{
  char astring[10] = "Onta";

  printf("the string is: %s\n", reverse(astring));
  return 0;
}
