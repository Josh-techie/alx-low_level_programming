#include "main.h"
/**
  * _isupper - checks if a caracter is uppercase or not
  * @c: the character to check
  *
  * Return: 1 if uppercase otherwise 0
  */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}
