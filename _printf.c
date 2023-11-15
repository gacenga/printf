#include "main.h"
#include <stdarg.h>
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
if (format != '%')
{
_putchar(*format);
j++;
}
else
{
format++;
if (*format == '%')
{
print_37(void);
j++;
}
else if (*format == 'c')
{
print_c(va_list args);
j++;
}
else if (*format == 's')
{
str = va_arg(args, char*);
for (i = 0; *str != '\0'; i++)
;
j = i;
print_s(va_list args);
}
}
format++;
}
va_end(args);
return (j);
}
