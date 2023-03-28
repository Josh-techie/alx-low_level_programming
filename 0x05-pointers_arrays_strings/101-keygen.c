#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point.
 *
 * Return: Always 0.
 */
int main(void)
{
char password[84];
int i, sum, n;
srand(time(NULL));
/* Generate 12 random characters */
for (i = 0, sum = 0; sum < 2772 - 122; i++)
{
n = rand() % 62;
if (n < 10)
password[i] = '0' + n;
else if (n < 36)
password[i] = 'a' + n - 10;
else
password[i] = 'A' + n - 36;
sum += password[i];
}
/* Add remaining characters to reach sum of 2772 */
password[i++] = 2772 - sum - 1;
password[i] = '\0';
printf("%s", password);
return (0);
}
