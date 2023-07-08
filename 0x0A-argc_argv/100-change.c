#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - prints the least amount of coins necessary to
 * a certain amount of money in change
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
int sum, k, result;
int coins[] = {25, 10, 5, 2, 1};
if (argc != 2)
{
printf("Error\n");
return (1);
}
sum = atoi(argv[1]);
result = 0;
if (sum < 0)
{
printf("0\n");
return (0);
}
for (k = 0; k < 5 && sum >= 0; k++)
{
while (sum >= coins[k])
{
result++;
sum -= coins[k];
}
}
printf("%d\n", result);
return (0);
}
