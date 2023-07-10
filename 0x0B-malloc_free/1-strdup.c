#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - copy to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
char *aaa;
int j, n = 0;
if (str == NULL)
return (NULL);
j = 0;
while (str[j] != '\0')
j++;
aaa = malloc(sizeof(char) * (j + 1));
if (aaa == NULL)
return (NULL);
for (n = 0; str[n]; n++)
aaa[n] = str[n];
return (aaa);
}
