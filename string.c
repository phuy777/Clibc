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
