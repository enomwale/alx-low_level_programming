#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * main - prints the outcome of basic procedures
 * @argc: The quantity of arguments that were given to the program
 * @argv: an array of parameters' pointers
 * Return: never 1
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
int  num11, num12;
char*op;
if (argc != 4)
{
printf("Error\n");
exit(98);
}
num11 = atoi(argv[1]);
op = argv[2];
num12 = atoi(argv[3]);
if (get_op_func(op) == NULL || op[1] != '\0')
{
printf("Error\n");
exit(99);
}
if ((*op == '/' && num12 == 0) ||
(*op == '%' && num12 == 0))
{
printf("Error\n");
exit(100);
}
printf("%d\n", get_op_func(op)(num11, num12));
return (0);
}
