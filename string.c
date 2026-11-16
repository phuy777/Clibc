#include "string.h"

size_t strlen(const char *src) {
  size_t len = 0;
  while (src[len] != '\0') {
    len++;
  }
  return (size_t)len;
}
