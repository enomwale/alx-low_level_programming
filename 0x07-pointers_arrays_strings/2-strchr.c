#include "main.h"
/**
 * _strchr - Access point
 * @s: input
 * @c: input
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
int p = 0;

for (; s[p] >= '\0'; p++)
{
if (s[p] == c)
return (&s[p]);
}
return (0);
}
