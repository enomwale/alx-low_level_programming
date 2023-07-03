#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Access point
 * @a: input
 * @size: input
 * Return: Always 0 (Success)
 */
void print_diagsums(int *a, int size)
{
int num1, num2, k;

num1 = 0;
num2 = 0;

for (k = 0; k < size; k++)
{
num1 = num1 + a[k * size + k];
}
for (k = size - 1; k >= 0; k--)
{
num2 += a[k * size + (size - k - 1)];
}
printf("%d, %d\n", num1, num2);
}
