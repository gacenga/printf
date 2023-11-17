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
int _printf2(const char *format, ...)
{
va_list args;
int j = 0;
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
if(*format == 'd' || *format == 'i')
{
int num = va_arg(args, int);
if (num < 0)
{
_putchar('-');
j++;
num = -num;
}
j += print_number(num);
}
}
format++;
}
va_end(args);
return (j);
}
