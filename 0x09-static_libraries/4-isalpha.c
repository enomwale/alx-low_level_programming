#include "main.h"
/**
 * _isalpha - makes an alphabetic character check
 * @c: character to be verified
 * Return: 0 if c is not a letter, 1 if it is
 */
int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
