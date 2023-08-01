#include "lists.h"
/**
 * free_listint - frees a selected list
 * @head: listint_t list to be realesed 
 */
void free_listint(listint_t *head)
{
listint_t *temperature;
while (head)
{
temperature = head->next;
free(head);
head = temperature;
}
}
