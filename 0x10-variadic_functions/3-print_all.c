#include"variadic_functions.h"

/**
* print_char - Print a character.
*
* @arg: A list of arguments pointing
*       to the character to be printed.
*
* Return: Nothing.
*/
void print_char(va_list arg)
{
char c = va_arg(arg, int);
printf("%c", c);
}
/**
* print_int - Print an integer.
*
* @arg: A list of arguments pointing
*       to the integer to be printed.
*
* Return: Nothing.
*/
void print_int(va_list arg)
{
int n = va_arg(arg, int);
printf("%d", n);
}
/**
* print_float - Print a float.
*
* @arg: A list of arguments pointing
*       to the float to be printed.
*
* Return: Nothing.
*/
void print_float(va_list arg)
{
float n = va_arg(arg, double);
printf("%f", n);
}
/**
* print_string - Print a string.
*
* @arg: A list of arguments pointing
*       to the string to be printed.
*
* Return: Nothing.
*/
void print_string(va_list arg)
{
char *str = va_arg(arg, char *);
if (str == NULL)
{
printf("(nil)");
return;
}
printf("%s", str);
}
/**
* print_all - Print anything.
*
* @format: A string of characters representing
*          the argument types.
*
* Description: If any argument not of type char,
*              int, float or char * is ignored.
*
* Return: Nothing.
*/
void print_all(const char * const format, ...)
{
va_list ap;
int i = 0, j = 0;
char *separator = "";
func_printer funcs[] = {
{"c", print_char},
{"i", print_int},
{"f", print_float},
{"s", print_string}
};
va_start(ap, format);
while (format && format[i])
{
j = 0;
while (j < 4 && format[i] != *(funcs[j].symbol))
j++;
if (j < 4)
{
printf("%s", separator);
funcs[j].print_func(ap);
separator = ", ";
}
i++;
}
printf("\n");
va_end(ap);
}

