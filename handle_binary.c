#include "main.h"

void print_binary(unsigned int num) {
    if (num > 1) {
        print_binary(num / 2);
    }
    _putchar('0' + (num % 2));
}

void _printf(const char *format, ...) {
    va_list args;
    va_start(args, format);

    while (*format != '\0') {
        if (*format == '%') {
            format++;  // Move past the '%'

            // Handle the custom conversion specifier %b
            if (*format == 'b') {
                unsigned int num = va_arg(args, unsigned int);
                print_binary(num);
            }
        } else {
            putchar(*format);
        }

        format++;
    }

    va_end(args);
}
