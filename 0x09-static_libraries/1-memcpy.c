#include "main.h"
/**
 *_memcpy - a method for copying memory space
 *@dest: memory where data is kept
 *@src: a copy is made in memory
 *@n: amount of bytes
 *Return: memory copied with n bytes modified
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
int a = 0;
int m = n;
for (; a < m; a++)
{
dest[a] = src[a];
n--;
}
return (dest);
}
