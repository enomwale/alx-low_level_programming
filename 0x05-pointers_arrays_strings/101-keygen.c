#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - a program that produces random, legitimate
 * passwords for the program 101-crackme
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int pass[100];
int k, num, n;

num = 0;

srand(time(NULL));

for (k = 0; k < 100; k++)
{
pass[k] = rand() % 78;
num += (pass[k] + '0');
putchar(pass[k] + '0');
if ((2772 - num) -'0' < 78)
{
n = 2772 - num - '0';
num += n;
putchar(n + '0');
break;
}
}

return (0);
}
