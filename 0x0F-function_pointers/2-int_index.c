#include "function_pointers.h"
/**
 * int_index - if comparison is true, return index place; otherwise, return -1
 * @array: array
 * @size: size of the array's elements
 * @cmp: pointer to one of the three major functions
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int l;
if (array == NULL || size <= 0 || cmp == NULL)
return (-1);
for (l = 0; l < size; l++)
{
if (cmp(array[l]))
return (l);
}
return (-1);
}
