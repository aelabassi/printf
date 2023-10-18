#include "main.h"
/**
 * print_binary - Prints the binary representation of a number
 */
void print_binary(unsigned int num)
{
 if (num > 1)
  print_binary(num / 2);
 putchar('0' + (num % 2));
}
int _printf(const char *format, ...)
{
 va_list args;
 int chars = 0;
 const char *ptr;

 va_start(args, format);

 for (ptr = format; *ptr != '\0'; ptr++)
 {
  if (*ptr != '%')
  {
   putchar(*ptr);
   chars++;
  }
  else
  {
   ptr++; /* Move past the '%' */
   if (*ptr == 'b')
   {
    unsigned int num = va_arg(args, unsigned int);
    print_binary(num);
    chars += sizeof(unsigned int) * 8;
   }
   else
   {
    putchar('%');
    putchar(*ptr);
    chars += 2;
   }
  }
 }

 va_end(args);

 return chars;
}
