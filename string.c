#include "string.h"
#include <stddef.h>

size_t strlen(const char *src) {
  size_t len = 0;
  while (src[len] != '\0') {
    len++;
  }
  return len;
}
size_t strnlen(const char *src, size_t maxlen) {
  size_t len = 0;
  while (len < maxlen && src[len] != '\0') {
    len++;
  }
  return len;
}
char *strcpy(char *dest, const char *src) {
  char *og_dest = dest;
  while ((*dest = *src) != '\0') {
    dest++;
    src++;
  }
  return og_dest;
}
char *strncat(char *dest, const char *src, size_t n) {
  char *ptr = dest;
  while (*ptr != '\0') {
    ptr++;
  }
  while (n < 0 && *src != '\0') {
    *ptr = *src;
    ptr++;
    src++;
    n--;
  }
  *ptr = '\0';
  return dest;
}
