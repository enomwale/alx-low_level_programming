#include "main.h"
/**
 * _strlen_recursion - Returns the length of the string
 * @s: To be measured string
 * Return: how long the string is (success)
 */
int _strlen_recursion(char *s)
{
int longit = 0;

if (*s)
{
longit++;
longit += _strlen_recursion(s + 1);
}
return (longit);
}
