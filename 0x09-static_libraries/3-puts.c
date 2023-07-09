#include "main.h"
/**
 * _puts - Script outputs a string to standard output
 *@str: The string that will be printed
 * A new line is printed by _putchar
 */
void _puts(char *str)
{
while (*str)
_putchar(*str++);
_putchar('\n');
}
