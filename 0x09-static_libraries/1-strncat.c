#include "main.h"
/**
 * _strncat - concatenate two strings function
 * using n or less bytes from the source
 * @dest: input value
 * @src: input value
 * @n: input value
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
int t;
int k;
t = 0;
while (dest[t] != '\0')
{
t++;
}
k = 0;
while (k < n && src[k] != '\0')
{
dest[t] = src[k];
t++;
k++;
}
dest[t] = '\0';
return (dest);
}
