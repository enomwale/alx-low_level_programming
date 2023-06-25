#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times the character \ should be printed
 */

void print_diagonal(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
int i, o;

for (i = 0; i < n; i++)
{
for (o = 0; o < n; o++)
{
if (o == i)
_putchar('\\');
else if (o < i)
_putchar(' ');
}
_putchar('\n');
}
}
}
