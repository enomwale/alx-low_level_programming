#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - displays each array element on a new line
 * @array: array
 * @size: number of elements to print
 * @action: pointer to print in hex or normal
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int j;
if (array == NULL || action == NULL)
return;
for (j = 0; j < size; j++)
{
action(array[j]);
}
}
