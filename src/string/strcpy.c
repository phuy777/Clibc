#include <stddef.h>
#include <string.h>

char *strcpy(char *dest, const char *src) {
  char *ptr = dest;
  while (*src != '\0') {
    *ptr = *src;
    ptr++;
    src++;
  }
  *ptr = '\0';
  return dest;
}
