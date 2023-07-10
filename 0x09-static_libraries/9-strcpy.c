#include "main.h"
/**
 * char *_strcpy - the program copies the string that src points to
 * @dest: copy to
 * @src: copy from
 * Return: string value
 */
char *_strcpy(char *dest, char *src)
{
int o = 0;
int d = 0;
while (*(src + o) != '\0')
{
o++;
}
for ( ; d < o ; d++)
{
dest[d] = src[d];
}
dest[o] = '\0';
return (dest);
}
