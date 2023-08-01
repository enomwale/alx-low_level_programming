#include "lists.h"
/**
 * free_listint2 - frees a list
 * @head: pointer to the listint_t list to be released
 */
void free_listint2(listint_t **head)
{
listint_t *temperature;
if (head == NULL)
return;
while (*head)
{
temperature = (*head)->next;
free(*head);
*head = temperature;
}
*head = NULL;
}
