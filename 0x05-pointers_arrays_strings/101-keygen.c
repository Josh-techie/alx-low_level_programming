#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LEN 12

/**
 * main - Generates random valid passwords for the program 101-crackme
 *
 * Done by Joe
 * Return: Always 0
 */
int main(void)
{
int i, sum, diff;
char password[PASSWORD_LEN + 1];
time_t t;
srand((unsigned int) time(&t));
/* Generate random characters until the sum of their ASCII codes is 2772 */
sum = 0;
for (i = 0; i < PASSWORD_LEN; i++)
{
password[i] = rand() % 94 + 33;
sum += password[i];
}
/* Calculate the difference between the sum and the target ASCII value */
diff = 2772 - sum;
/* Add the difference to the last character of the password */
password[PASSWORD_LEN - 1] += diff
/* Check if any character is out of range or a null byte */
for (i = 0; i < PASSWORD_LEN; i++)
{
if (password[i] < 33 || password[i] > 126 || password[i] == 0)
{
diff = (password[i] < 33) ? 33 - password[i] : 126 - password[i];
password[i] += diff;
}
}
password[PASSWORD_LEN] = '\0';
printf("%s", password);
if (strcmp(password, "Tada! Congrats") == 0)
{
printf("\n");
return (0);
}
else
{
fprintf(stderr, "\nWrong password\n");
return (1);
}
}
