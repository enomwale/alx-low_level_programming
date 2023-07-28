#include <stdio.h>
#include "lists.h"
/**
 * print_list - prints elements of a linked list
 * @h: the list_t list to print
 * Return: the qauntity of nodes printed
 */
size_t print_list(const list_t *h)
{
size_t k;
k = 0;
while (h)
{
if (!h->str)
printf("[0] (nil)\n");
else
printf("[%u] %s\n", h->len, h->str);
h = h->next;
k++;
}
return (k);
}
