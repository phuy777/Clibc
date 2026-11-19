#include "string.h"
#include <stdio.h>

int main(void) {
  const char *string = "hhdd";
  printf("%zu\n", strlen(string));
  printf("%zu\n", strnlen(string, 4));
}
