#include "main.h"
#include <stdarg.h>
/**
* print_c - print character
*
* @char:character
* Return:length of character
*/
int print_c(va_list prc)
{
char pstr;
pstr = va_arg(prc, int);
_putchar(pstr);
return(1);
}