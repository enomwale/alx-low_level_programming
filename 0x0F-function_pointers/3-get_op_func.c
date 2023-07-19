#include "3-calc.h"
#include <stdlib.h>
/**
 * get_op_func - chooses the correct function to perform
 * the task asked by the user
 * @s: The operator succeeded as argument
 * Return: A pointer to the function matching
 * to the operator given as a limit
 */
int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL},
};
int k;
k = 0;
while (ops[k].op != NULL && *(ops[k].op) != *s)
k++;
return (ops[k].f);
}
