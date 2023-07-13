#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#define ERR_MSG "Error"
/**
 * is_digit - determines if a string includes a non-digit character
 * @s: to be assessed string
 * Return: 1 if a digit is detected, 0 if not
 */
int is_digit(char *s)
{
int j = 0;
while (s[j])
{
if (s[j] < '0' || s[j] > '9')
return (0);
j++;
}
return (1);
}
/**
 * _strlen - returns a string's length
 * @s: string to assess
 * Return: how long the string is
 */
int _strlen(char *s)
{
int j = 0;
while (s[j] != '\0')
{
j++;
}
return (j);
}
/**
 * errors - handles main errors
 */
void errors(void)
{
printf("Error\n");
exit(98);
}
/**
 * main - adds two positive numbers together
 * @argc: various arguments
 * @argv: multiple arguments
 *
 * Return: always 0 (Success)
 */
int main(int argc, char *argv[])
{
char *s1, *s2;
int len3, len4, len, j, bring, digit3, digit4, *result, b = 0;
s1 = argv[1], s2 = argv[2];
if (argc != 3 || !is_digit(s1) || !is_digit(s2))
errors();
len3 = _strlen(s1);
len4 = _strlen(s2);
len = len3 + len4 + 1;
result = malloc(sizeof(int) * len);
if (!result)
return (1);
for (j = 0; j <= len3 + len4; j++)
result[j] = 0;
for (len3 = len3 - 1; len3 >= 0; len3--)
{
digit3 = s1[len3] - '0';
bring = 0;
for (len4 = _strlen(s2) - 1; len4 >= 0; len4--)
{
digit4 = s2[len4] - '0';
bring += result[len3 + len4 + 1] + (digit3 * digit4);
result[len3 + len4 + 1] = bring % 10;
bring /= 10;
}
if (bring > 0)
result[len3 + len4 + 1] += bring;
}
for (j = 0; j < len - 1; j++)
{
if (result[j])
b = 1;
if (b)
putchar(result[j] + '0');
}
if (!b)
_putchar('0');
_putchar('\n');
free(result);
return (0);
}
