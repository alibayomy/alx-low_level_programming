#include "lists.h"
/**
 * free_listint - frees a listint_t list.
 * @head: a pointer to the first element of the list
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	if (head)
	{
		while (head->next)
		{
			tmp = head;
			head = head->next;
			free(tmp);
		}
		free(head);
	}
}
