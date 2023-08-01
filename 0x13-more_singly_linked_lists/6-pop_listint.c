#include "lists.h"
/**
 * pop_listint - removes the head node of a linked list
 * @head: pointer the first element in the linked list
 * Return: the data inside the elements that was removed,
 * or 0 if the list has nothing
 */
int pop_listint(listint_t **head)
{
listint_t *temperature;
int number;
if (!head || !*head)
return (0);
number = (*head)->n;
temperature = (*head)->next;
free(*head);
*head = temperature;
return (number);
}
