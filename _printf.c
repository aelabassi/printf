#include "main.h"
int _printf(const char *format, ...)
{
 va_list args;
 va_start(args, format);

 int count = 0;

 while (format && *format != '\0')
 {
  if (*format == '%')
  {
   format++;

   switch (*format)
   {
    case 'c':
    {
     /* Print a character */
     print_char(args);
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
   }

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

