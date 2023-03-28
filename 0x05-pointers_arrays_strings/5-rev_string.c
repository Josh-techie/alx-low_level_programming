#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: The string to be reversed.
 */
void rev_string(char *s)
{
int i, j;
char temp;
for (i = 0, j = 0; s[j + 1] != '\0'; j++)
{
/* Increment j to the end of the string */
}
while (i < j)
{
temp = s[i];
s[i] = s[j];
s[j] = temp;
i++;
j--;
}
}
