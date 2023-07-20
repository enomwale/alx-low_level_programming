#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - numbers are printed, then a new line is drawn
 * @separator: The string that will appear between numbers
 * @n: Integers supplied to the function in the specified number
 * @...: A number of different numbers will be printed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int indicator;
va_list nums;
va_start(nums, n);
for (indicator = 0; indicator < n; indicator++)
{
printf("%d", va_arg(nums, int));
if (indicator != (n - 1) && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(nums);
}
