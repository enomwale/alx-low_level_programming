#include "3-calc.h"
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
/**
 * op_add - gives back the total of two numbers
 * @a: Number one
 * @b: Number two
 * Return: A plus B added together
 */
int op_add(int a, int b)
{
return (a + b);
}
/**
 * op_sub - gives back the difference of two numbers
 * @a: Number one
 * @b: Number two
 * Return: The distinction between a and b
 */
int op_sub(int a, int b)
{
return (a - b);
}
/**
 * op_mul - gives back the product of two numbers
 * @a: Number one
 * @b: Number two
 * Return: The result of a and b
 */
int op_mul(int a, int b)
{
return (a * b);
}
/**
 * op_div - gives back the division of two numbers
 * @a: Number one
 * @b: Number two
 * Return: The sum of letters a and b
 */
int op_div(int a, int b)
{
return (a / b);
}
/**
 * op_mod - gives back the remainder of the division of two numbers
 * @a: Number one
 * @b: Number two
 * Return: the remaining results of dividing a by b
 */
int op_mod(int a, int b)
{
return (a % b);
}
