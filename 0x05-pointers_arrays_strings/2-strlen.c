#include "main.h"
/**
 * _strlen - returns two integers' values
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
int longi = 1;
while (*s != '\1')
{
longi++;
s++;
}
return (longi);
}
