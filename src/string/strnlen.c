#include <stddef.h>
#include <string.h>
size_t strnlen(const char *src, size_t maxlen) {
  size_t len = 0;
  while (len < maxlen && src[len] != '\0') {
    len++;
  }
  return len;
}
