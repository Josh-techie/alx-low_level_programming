#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates a random valid password for 101-crackme program
 *
 * Return: Always 0
 */
int main(void)
{
int i, sum, diff, c;
char password[100];

srand(time(NULL));
sum = 0;
i = 0;
while (sum < 2772 - 122)
{
c = rand() % 62;
if (c < 10)
password[i++] = '0' + c;
else if (c < 36)
password[i++] = 'a' + c - 10;
else
password[i++] = 'A' + c - 36;
sum += password[i - 1];
}
diff = sum - (2772 - 122);
password[i] = diff;
printf("%s", password);
return (0);
}
