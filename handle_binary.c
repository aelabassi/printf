#include "main.h"
/**
 * print_binary - Prints the binary representation of a number
 */
int print_binary(va_list args, int n)
{
	unsigned int x, i, sum;
	unsigned int a[32];
	int count;

	x = 32768; /* (2 ^ 15) */
	a[0] = n / x;

	i = 1;
	while (i < 32)
	{
		x /= 2;
		a[i] = (n / x) % 2;
		i++;
	}

	i = 0;
	sum = 0;
	count = 0;
	while (i < 32)
	{
		sum += a[i];
		if (sum || i == 31)
		{
			char z = '0' + a[i];
			_putchar(z);
			count++;
		}
		i++;
	}

	return (count);
}
