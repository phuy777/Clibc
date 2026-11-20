#ifndef STRING_H
#define STRING_H
#include <stddef.h>

size_t strlen(const char *src);
size_t strnlen(const char *src, size_t maxlen);
char *strcpy(char *dest, const char *src);
#endif
