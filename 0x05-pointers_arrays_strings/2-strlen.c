#include "main.h"
/**
  * _strlen - returns the length of a string
  * @s: type char
  * Return: the length of the char
  */
int _strlen(char *s)
{
int length = 0;
while (*s != '\0')
{
length++;
s++;
}
return (length);
}
