#ifndef STRING_H
#define STRING_H
#include "stddef.h"

size_t strlen(const char *src);
size_t strnlen(const char *src, size_t maxlen);
char *strcpy(char *dest, const char *src);
char *strncat(char *dest, const char *src, size_t n);
char *strcat(char *dest, const char *src);
#endif
