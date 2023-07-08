#include <stdio.h>
#include "main.h"
/**
 * _atoi - creates an integer from a string
 * @s: string to be changed
 * Return: the string's conversion to int
 */
int _atoi(char *s)
{
int j, a, n, len, f, digit;
j = 0;
a = 0;
n = 0;
len = 0;
f = 0;
digit = 0;
while (s[len] != '\0')
len++;
while (j < len && f == 0)
{
if (s[j] == '-')
++a;
if (s[j] >= '0' && s[j] <= '9')
{
digit = s[j] - '0';
if (a % 2)
digit = -digit;
n = n * 10 + digit;
f = 1;
if (s[j + 1] < '0' || s[j + 1] > '9')
break;
f = 0;
}
j++;
}
if (f == 0)
return (0);
return (n);
}
/**
 * main - adds two numbers together
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
int result, num1, num2;
if (argc < 3 || argc > 3)
{
printf("Error\n");
return (1);
}
num1 = _atoi(argv[1]);
num2 = _atoi(argv[2]);
result = num1 *num2;
printf("%d\n", result);
return (0);
