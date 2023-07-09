#include "main.h"
/**
 * _isupper - capital letters
 * @c: char to verify
 *
 * Return: 1 or 0 (success)
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}
