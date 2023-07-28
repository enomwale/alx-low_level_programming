#include <stdlib.h>
#include "lists.h"
/**
 * list_len - returns the quantity of elements in a linked list
 * @h: pointer to the list_t list
 * Return: count of elements in h
 */
size_t list_len(const list_t *h)
{
size_t k;
k = 0;
while (h)
{
k++;
h = h->next;
}
return (k);
}
