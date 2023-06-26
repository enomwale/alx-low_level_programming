#include "main.h"
/**
 * puts2 - function should only output one of two characters
 * beginning with the first
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
int longi = 0;
int t = 0;
char *y = str;
int g;

while (*y != '\0')
{
y++;
longi++;
}
t = longi - 1;
for (g = 0 ; g <= t ; g++)
{
if (g % 2 == 0)
{
putchar(str[g]);
}
}
putchar('\n');
}
