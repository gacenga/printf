#include "main.h"
#include <stdarg.h>
#include <stddef.h>
/**
* _printf - produces output according to a format
*
* @format:format
* @...:arguments
* Return:number of characters printed
*/
int _printf(const char *format, ...)
{
va_list args;
int i = 0;
int j = 0;
char *ptr;
va_start(args, format);
if (format == NULL)
return (-1);
while (*format)
{
if (*format != '%')
{
_putchar(*format);
j++;
}
else
{
format++;
if (*format == '%')
{
_putchar('%');
j++;
}
else if (*format == 'c')
{
_putchar(va_arg(args, int));
j++;
}
else if (*format == 's')
{
ptr = va_arg(args, char*);
for (i = 0; ptr[i] != '\0'; i++)
{
_putchar(ptr[i]);
j++;
}
}
}
format++;
}
va_end(args);
return (j);
}
