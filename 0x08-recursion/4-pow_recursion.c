#include "main.h"
/**
 * _pow_recursion - delivers x's value rounded up to the nearest power of y
 * @x: raising value
 * @y: power
 * Return: results of the power
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
if (y == 0)
return (1);
return (x * _pow_recursion(x, y - 1));
}
