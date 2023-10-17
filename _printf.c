#include "main.h"


int _printf(const char *format, ...)
{
va_list args;
int count = 0;

va_start(args, format);

while (format && *format != '\0')
{
if (*format == '%')
{
format++;

switch (*format)
{
case 'c':
{
print_char(args);
count++;
break;
}
case 's':
{
count = print_string(args);
break;
}
case '%':
{
_putchar('%');
count++;
break;
}
format++;

}
}
else
{
_putchar(*format);
count++;
format++;
}

}
va_end(args);
return (count);
}


