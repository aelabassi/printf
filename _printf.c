#include "main.h"
#include <stdio.h>
#include <stdarg.h>

int _printf(const char *format, ...)
{
    va_list args;
    va_start(args, format);

    int count = 0;
    int i = 0;

    while (format[i] != '\0')
    {
        if (format[i] == '%')
        {
            i++; 

            switch(format[i])
            {
                case 'c':
                {
                    // Print a character
                    int c = va_arg(args, int);
                    _putchar(c);
                    count++;
                    break;
                }
                case 's':
                {
                    // Print a string
                    const char *s = va_arg(args, const char *);
                    while (*s != '\0')
                    {
                        _putchar(*s);
                        s++;
                        count++;
                    }
                    break;
                }
                case '%':
                {
                    // Print a '%' character
                    _putchar('%');
                    count++;
                    break;
                }
            }
        }
        else
        {
            // Print normal characters
            _putchar(*format);
            count++;
        }

        i++;
    }

    va_end(args);

    return count;
}
int main()
{
    _printf("Hello, %s! Today is %c\n", "John", 'M');
    return 0;
}

