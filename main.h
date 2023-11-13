#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int _printf(const char *format, ...);
int _putch(char c);
int (*selectformat(char ch))(va_list ap);
int charac_func(va_list ap);
int integer_func(va_list ap);
int string_func(va_list ap);
int print_num(long int j, int count);
int integer_Ifunc(va_list ap);

#endif
