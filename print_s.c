#include "main.h"
#include <stdarg.h>
/**
* print_s - print string
*
* @src:string
* Return:lenth of string
*/
int print_s(va_list prc)
{
char *ptr;
int j;
int l;
ptr = va_arg(prc, char*);
if (ptr == NULL)
{
ptr = "(null)";
l = _strlen(ptr);
for(j = 0; j < l; j++)
_putchar(ptr[j]);
return(l);
}
else
{
l = _strlen(ptr);
for(j = 0; j < l; j++)
_putchar(ptr[j]);
return(l);
}
}
