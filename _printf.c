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
     int c = va_arg(args, int);
     _putchar(c);
     count++;
     break;
    }
    case 's':
    {
     /* Print a string */
     const char *s = va_arg(args, const char *);
     while (*s != '\0')
     {
      _putchar(*s);
      s++;
      count++;
     }
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

