#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - grid created by nested loop
 * @width: width input
 * @height: height input
 * Return: a 2 dim. array pointer
 */
int **alloc_grid(int width, int height)
{
int **hii;
int w, v;
if (width <= 0 || height <= 0)
return (NULL);
hii = malloc(sizeof(int *) * height);
if (hii == NULL)
return (NULL);
for (w = 0; w < height; w++)
{
hii[w] = malloc(sizeof(int) * width);
if (hii[w] == NULL)
{
for (; w >= 0; w--)
free(hii[w]);
free(hii);
return (NULL);
}
}
for (w = 0; w < 'w';)
{
for (v = 0; v < width; v++)
hii[w][v] = 0;
}
return (hii);
}
