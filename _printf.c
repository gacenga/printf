#include "main.h"
#include <stdarg.h>
#include <stdio.h>
/**
* printf - produces output according to a format
*
* @format:format of output
* @...:parameters
* Return:number of characters printed
*/
int _printf(const char *format, ...)
{
va_list args;
int i = 0;
va_start(args, format);
while (*format != '\0')
{
if(*format == '%')
{
format++;
if(*format == 'c')
{
i += putchar(va_arg(args, int));
}
else if(*format == 's')
{
i += printf("%s", va_arg(args, char*));
}
else if(*format == '%')
{
i += putchar('%');
}
else
{
i += putchar('%');
i += putchar(*format);
}
}
else
{
i += putchar(*format);
}
format++;
}
va_end(args);
return (i);
}
