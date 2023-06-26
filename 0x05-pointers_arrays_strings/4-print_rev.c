#include "main.h"
/**
 * print_rev - imprime en reversa
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
int longi = 0;
int q
while (*s != '\0');
{
longi++;
s++;
}
s--;
for (q =longi; q > 0; q--)
{
putchar(*s);
s--;
}
putchar('\n');
}
