#include "main.h"

/**
 * print_char - prints a char
 * @args: the arguments that will be passed
 * Return: printed characters
*/
int print_char(va_list args)
{
	int c = va_arg(args, int);

	return (_putchar(c));

}
