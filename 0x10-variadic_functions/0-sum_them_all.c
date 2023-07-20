#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - gives back the total of all its parameters
 * @n: how many parameters were provided to the function
 * @...: a flexible set of parameters to determine the sum of
 * Return: If n == 0 - 0
 * Otherwise - the total of all factors
 */
int sum_them_all(const unsigned int n, ...)
{
va_list ap;
unsigned int k, sum;
sum = 0;
va_start(ap, n);
for (k = 0; k < n; k++)
sum += va_arg(ap, int);
va_end(ap);
return (sum);
}
