#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints buffer
 * @b: buffer
 * @size: size
 * Return: void
 */

void print_buffer(char *b, int size)
{
int q, w, i;

q = 0;

if (size <= 0)
{
printf("\n");
return;
}
while (q < size)
{
w = size - q < 10 ? size - q : 10;
printf("%08x: ", q);
for (i = 0; i < 10; i++)
{
if (i < w)
printf("%02x", *(b + q + i));
else
printf("  ");
if (i % 2)
{
printf(" ");
}
}
for (i = 0; i < w; i++)
{
int c = *(b + q + i);

if (c < 32 || c > 132)
{
c = '.';
}
printf("%c", c);
}
printf("\n");
q += 10;
}
}
