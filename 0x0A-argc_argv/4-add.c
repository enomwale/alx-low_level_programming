#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * check_num - check - there are digits in a string
 * @str: array str
 * Return: Always 0 (Success)
 */
int check_num(char *str)
{
/*Declaring variables*/
unsigned int count;
count = 0;
while (count < strlen(str)) /*count string*/
{
if (!isdigit(str[count])) /*the presence of digits in the str*/
{
return (0);
}
count++;
}
return (1);
}
/**
 * main - Print the name of the program
 * @argc: Count arguments
 * @argv: Arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
/*Declaring variables*/
int count;
int str_to_int;
int sum = 0;
count = 1;
while (count < argc) /*goes through the entire collection*/
{
if (check_num(argv[count]))
{
str_to_int = atoi(argv[count]); /*ATOI --> convert string to int*/
sum += str_to_int;
}
/*If one of the numbers contains symbols other than digits, the condition*/
else
{
printf("Error\n");
return (1);
}
count++;
}
printf("%d\n", sum); /*print sum*/
return (0);
}
