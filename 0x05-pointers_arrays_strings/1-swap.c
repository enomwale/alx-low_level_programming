#include "main.h"
/**
 * swap_int -the function switches the values of two integers
 * @a: binary to swap
 * @b: binary to swap
 */
void swap_int(int *a, int *b)
{
int z;

z = *a;
*a = *b;
*b = z;
}
