#ifndef MAIN_HEADER_FILE
#define MAIN_HEADER_FILE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
