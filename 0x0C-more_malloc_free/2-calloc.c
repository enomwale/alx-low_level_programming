#include <stdlib.h>
#include "main.h"
/**
 * *_memset - gives memory a constant byte of data
 * @s: to fill the memory space
 * @b: to copy char
 * @n: how many times to copy b
 * Return: pointer to the storage space
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int j;
for (j = 0; j < n; j++)
{
s[j] = b;
}
return (s);
}
/**
 * *_calloc - allots space for an array in memory
 * @nmemb: how many items are in the array
 * @size: size of every component
 * Return: an indication of allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *ptr;
if (nmemb == 0 || size == 0)
return (NULL);
ptr = malloc(size * nmemb);
if (ptr == NULL)
return (NULL);
_memset(ptr, 0, nmemb * size);
return (ptr);
}
