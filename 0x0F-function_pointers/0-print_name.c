#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - using a pointer to function, print name
 * @name: adding a string
 * @f: reference to function
 * Return: nothing
 **/
void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
return;
f(name);
}
