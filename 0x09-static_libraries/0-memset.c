#include "main.h"
/**
 * _memset - The program inserts a particular value into a block of memory
 * @s: initial memory address to be filled
 * @b: the ideal value
 * @n: bytes that must be modified
 * Return: alter the array by n bytes with the new value
 */
char *_memset(char *s, char b, unsigned int n)
{
int w = 0;
for (; n > 0; w++)
{
s[w] = b;
n--;
}
return (s);
}
