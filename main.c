#include "string.h"
#include <stdio.h>

int main(void) {
  const char *string = "hhdd";
  char str[] = "hello";
  char dest[20];
  printf("%zu\n", strlen(string));
  printf("%zu\n", strnlen(string, 4));
  strcpy(dest, str);
  printf("%s\n", dest);
}
