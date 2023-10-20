#include "main.h"

/**
 * handle_all - handles all the type specifiers
 * @format: pointer to const char
 * @args: number of arguments
 * Return: int
*/

int handle_all(const char *format, va_list args)
{
	int count = 0;

	switch (*format)
{
	case 'c':
	{
     /* Print a character */
	_putchar(va_arg(args, int));
	count++;
	break;
	}
	case 's':
	{
     /* Print a string */
	count = print_string(args);
	break;
	}
	case '%':
	{
     /* Print a '%' character */
	_putchar('%');
	count++;
	break;
	}
	case 'd':
	case 'i':
	{
		count = print_int(args);
		break;
	}
	case 'b':
	{
		count = print_binary(count);
		break;
	}
}
return (count);
}
