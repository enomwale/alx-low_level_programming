#include "main.h"

/**
 * char *_strcpy - a method that duplicates the string referenced by src
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
int z = 0;
int a = 0;

while (*(src + z) != '\0')
{
z++;
}
for ( ; a < z ; a++)
{
dest[a] = src[a];
}
dest[z] = '\0';
return (dest);
}
