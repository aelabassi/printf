#ifndef MAIN_H
#define MAIN_H
#include <string.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

int _putchar(char c);
int print_char(va_list args);
int print_string(va_list args);
int handle_all(const char *format, va_list args);
int _printf(const char *format, ...);
int print_int(va_list args);
int print_dec(va_list args);
void print_binary(va_list , int n);
#endif
