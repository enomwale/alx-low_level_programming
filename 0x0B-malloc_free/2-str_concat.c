#include "main.h"
#include <stdlib.h>
/**
 * str_concat - combine the input's ends at the end for size
 * @s1: one to concatenate
 * @s2: enter two to combine
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
char *conct;
int j, cj;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
j = cj = 0;
while (s1[j] != '\0')
j++;
while (s2[cj] != '\0')
cj++;
conct = malloc(sizeof(char) * (j + cj + 1));
if (conct == NULL)
return (NULL);
j = cj = 0;
while (s1[j] != '\0')
{
conct[j] = s1[j];
j++;
}
while (s2[cj] != '\0')
{
conct[j] = s2[cj];
j++, cj++;
}
conct[j] = '\0';
return (conct);
}
