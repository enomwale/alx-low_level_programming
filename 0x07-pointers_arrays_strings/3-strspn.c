#include "main.h"
/**
 * _strspn - Access point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int n = 0;
int y;

while (*s)
{
for (y = 0; accept[y]; y++)
{
if (*s == accept[y])
{
n++;
break;
}
else if (accept[y + 1] == '\0')
return (n);
}
s++;
}
return (n);
}
