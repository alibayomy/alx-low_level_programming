#include "lists.h"
/**
 * free_listint2 -  frees a listint_t list.
 * @head: a pointer to the pointer of the firs element
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head)
	{
		while ((*head)->next)
		{
			tmp = *head;
			(*head) = (*head)->next;
			free(tmp);
		}
		free(*head);
		*head = NULL;
	}
}	
