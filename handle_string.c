#include "main.h"

/**
 * print_string - prints a string
 * @args: list of arguements
 * Return: printed string length
*/
int print_string(va_list args)
{
	const char *str = va_arg(args, const char*);
	int i;
	int len = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
		len++;
	}
	return (len);
}
