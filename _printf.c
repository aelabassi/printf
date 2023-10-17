#include "main.h"

/**
 * _printf - print everything according the type specifier
 * @format: pointer to const char
 * Return: lenght of the printed argument
*/
int _printf(const char *format, ...)
{
va_list args;
va_start(args, format);

int count = 0;

if (format == NULL)
	return (-1);

while (format && *format != '\0')
{
if (*format == '%')
{
format++;
count = handle_all(format, args);
format++;

}
else
{
/* Print normal characters */
_putchar(*format);
count++;
format++;
}
}

va_end(args);

return (count);
}
