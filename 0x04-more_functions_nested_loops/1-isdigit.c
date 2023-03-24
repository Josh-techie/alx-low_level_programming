#include "main.h"
/**
  * _isdigit - checks if a number is a digit of not
  * @c: the number to check
  *
  * Return: 1 if c is a digit 0 otherwise
  */
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
return (1);
else
return (0);
}
