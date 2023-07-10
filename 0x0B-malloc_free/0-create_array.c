#include "main.h"
#include <stdlib.h>
/**
 * create_array - make an array of size size, then give it the value c
 * @size: array size
 * @c: to allocate char
 * Description: make an array of size size, then give it the value c
 * Return: array pointer; if failure, NULL
 */
char *create_array(unsigned int size, char c)
{
char *str;
unsigned int j;
str = malloc(sizeof(char) * size);
if (size == 0 || str == NULL)
return (NULL);
for (j = 0; j < size; j++)
str[j] = c;
return (str);
}
