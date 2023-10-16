#include <stdio.h>
#include <stdarg.h>

int _printf(const char *format, ...)
{
    va_list args;
    va_start(args, format);

    int count = 0; 

    while (*format != '\0')
    {
        if (*format == '%')
        {
            format++; 

       
            {
                case 'c':
                {
                    // Print a character
                    int c = va_arg(args, int);
                    putchar(c);
                    count++;
                    break;
                }
                case 's':
                {
                    // Print a string
                    const char *s = va_arg(args, const char *);
                    while (*s != '\0')
                    {
                        putchar(*s);
                        s++;
                        count++;
                    }
                    break;
                }
                case '%':
                {
                    // Print a '%' character
                    putchar('%');
                    count++;
                    break;
                }
            }
        }
        else
        {
            // Print normal characters
            putchar(*format);
            count++;
        }

        format++;
    }

    va_end(args);

    return count;
}
int main()
{
    _printf("Hello, %s! Today is %c\n", "John", 'M');
    return 0;
}

