#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - prints everything
 * @format: types of parameters supplied to the method, listed in a list
 */
void print_all(const char * const format, ...)
{
int l;
l = 0;
char *str;
char *sep = "";
va_list list;
va_start(list, format);
if (format)
{
while (format[l])
{
switch (format[l])
{
case 'c':
printf("%s%c", sep, va_arg(list, int));
break;
case 'l':
printf("%s%d", sep, va_arg(list, int));
break;
case 'f':
printf("%s%f", sep, va_arg(list, double));
break;
case 's':
str = va_arg(list, char *);
if (!str)
str = "(nil)";
printf("%s%s", sep, str);
break;
default:
l++;
continue;
}
sep = ", ";
l++;
}
}
printf("\n");
va_end(list);
}
