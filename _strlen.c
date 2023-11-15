#include "main.h"
/**
* strlen - returns length of string
*
* @str:pointer to string
* Return:length of string
*/
int  _strlen(char *str) {
    int length = 0;

    while (*str != '\0') {
        length++;
        str++;
    }

    return length;
}
/**
* strlenc - returns length of astring thats a constant
*
* @str:pointer to string
* Return:lenth of string
*/
int _strlenc(conct char *str)
{
  int length = 0;

  while (*str != '\0')
    {
      length++;
      str++;
    }
  return length;
}
