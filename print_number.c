#include "main.h"
#include <stddef.h>
#include <stdio.h>
/**
* print_number - prints an integer
*
* @n:integer
* Return:number of characters printed
*/
int print_number(int n)
{
if (n == 0)
{
return 0;
}
else
{
return (print_number(n / 10) + _putchar('0' + n % 10));
}
}
