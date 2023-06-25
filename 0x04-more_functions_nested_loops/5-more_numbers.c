#include "main.h"

/**
 * Entry - point
 * more_numbers - print more numbers
 */

void more_numbers(void)
{
int e, j;

for (e = 1; e <= 10; e++)
{
for (j = 0; j <= 14; j++)
{
if (j >= 10)
_putchar('1');
_putchar (j % 10 + '0');
}
_putchar('\n');
}
}

