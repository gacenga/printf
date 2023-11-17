#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* print_number - prints numbers
*
* @n:integer
* Return:number of integers
*/
int print_number(int n)
{
if (n == 0)
{
return (0);
}
else
{
return (print_number(n / 10) + _putchar('0' + n % 10));
}
}
