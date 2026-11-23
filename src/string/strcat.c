#include <stddef.h>
#include <string.h>
char *strcat(char *dest, const char *src) {
  char *ptr = dest;
  while (*ptr != '\0') {
    ptr++;
  }
  while ((*ptr = *src) != '\0') {
    ptr++;
    src++;
  }
  *ptr = '\0';
  return dest;
}
