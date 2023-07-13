#include <stdlib.h>
#include "main.h"
/**
 * *array_range - produces a collection of integers
 * @min:least storageable range of values
 * @max: minimum stored value range and element count
 * Return: identifier for the fresh array
 */
int *array_range(int min, int max)
{
int j, measurement;
int *ptr;
if (min > max)
return (NULL);
measurement = max - min + 1;
ptr = malloc(sizeof(int) * measurement);
if (ptr == NULL)
return (NULL);
for (j = 0; min <= max; j++)
ptr[j] = min++;
return (ptr);
}
