#include "main.h"
/**
 *  _strcat - function that joins two strings together
 *  @dest: input value
 *  @src: input value
 *  Return: void
 */
char *_strcat(char *dest, char *src)
{
int j;
int m;
j = 0;
while (dest[j] != '\0')
{
j++;
}
m = 0;
while (src[m] != '\0')
{
dest[j] = src[m];
j++;
m++;
}
dest[j] = '\0';
return (dest);
}
