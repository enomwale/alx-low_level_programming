#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - prints strings, then adds a new line after that
 * @separator: Between strings will be printed the string
 * @n: how many strings the function was given
 * @...: There will be a variable number of strings printed
 * Description: Separator is not printed if NULL
 * Whenever one of the strings is NULL, the character (nil) is printed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
char *str;
unsigned int indicator;
va_list strings;
va_start(strings, n);
for (indicator = 0; indicator < n; indicator++)
{
str = va_arg(strings, char *);
if (str == NULL)
printf("(nil)");
else
printf("%s", str);
if (indicator != (n - 1) && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(strings);
}
