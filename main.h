#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

int _pow(int n, int e);
int _printf(const char *format, ...);
int handle_modulus(char c, va_list types);
char *_sprintf(int num);

#endif
