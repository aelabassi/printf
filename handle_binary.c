#include "main.h"
/**
 * print_binary - Prints the binary representation of a number
 */
int print_binary(va_list types, int n)
{
    unsigned int x, i, sum;
    unsigned int a[32];
    int count;

    x = 32768; /* (2 ^ 15) */
    a[0] = n / x;
    for (i = 1; i < 32; i++)
    {
        x /= 2;
        a[i] = (n / x) % 2;
    }
    for (i = 0, sum = 0, count = 0; i < 32; i++)
    {
        sum += a[i];
        if (sum || i == 31)
        {
            char z = '0' + a[i];
            printf("%c", z);
            count++;
        }
    }
    return count;
}
