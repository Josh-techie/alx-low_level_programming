#include "main.h"
/**
  * print_rev - print the string in reverse followed by new line
  * @s: a string to be reversed
  * Return: void
  */
void print_rev(char *s)
{
int length = 0;
int i;
while (*s != '\0')
{
length++;
s++;
}
s--;
for (i = length ; i > 0 ; i--)
{
_putchar(*s);
}
_putchar('\n');
}
