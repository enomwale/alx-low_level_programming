#include <stdlib.h>
#include "main.h"
/**
 * *string_nconcat - n bytes of one string are concatenated with another string
 * @s1: to attach a string to
 * @s2: concatenate a string from
 * @n: how many bytes from s2 should be appended to s1
 * Return: pointing to the final string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *s;
unsigned int o = 0, k = 0, len4 = 0, len5 = 0;
while (s1 && s1[len4])
len4++;
while (s2 && s2[len5])
len5++;
if (n < len5)
s = malloc(sizeof(char) * (len4 + n + 1));
else
s = malloc(sizeof(char) * (len4 + len5 + 1));
if (!s)
return (NULL);
while (o < len4)
{
s[o] = s1[o];
o++;
}
while (n < len5 && o < (len4 + n))
s[o++] = s2[k++];
while (n >= len5 && o < (len4 + len5))
s[o++] = s2[k++];
s[o] = '\0';
return (s);
}
