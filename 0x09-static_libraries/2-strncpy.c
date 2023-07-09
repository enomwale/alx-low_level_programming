#include "main.h"
/**
 * _strncpy - a string to copy
 * @dest: input quality
 * @src: input quality
 * @n: input quality
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int l;
l = 0;
while (l < n && src[l] != '\0')
{
dest[l] = src[l];
l++;
}
while (l < n)
{
dest[l] = '\0';
l++;
}
return (dest);
}
