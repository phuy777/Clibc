#include <stddef.h>
#include <string.h>
char *strncpy(char *dest, const char *src, size_t n) {
  char *og_dest = dest;
  while (n > 0 && *src != '\0') {
    *dest = *src;
    dest++;
    src++;
    n--;
  }
  while (n > 0) {
    *dest = '\0';
    n--;
  }
  return og_dest;
}
