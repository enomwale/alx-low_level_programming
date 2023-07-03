#include "main.h"
/**
 * _memset - fill a memory block with a certain value
 * @s: initial memory address to be filled
 * @b: the desired value
 * @n: number of bytes to be changed
 *
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
int l = 0;

for (; n > 0; l++)
{
s[l] = b;
n--;
}
return (s);
}
