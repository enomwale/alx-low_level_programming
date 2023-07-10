#include "main.h"
#include <stdio.h>
#include <stdlib.h>		
/**
 * free_grid - frees 2d view array
 * @grid: 2d view grid
 * @height: height dimension of grid
 * Description: frees memory of grid
 * Return: nothing		
 */
void free_grid(int **grid, int height)		
{
int n;
for (n = 0; n < height; n++)
{
free(grid[n]);		
}
free(grid);	
}
