#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index
 *	index of a listint_t linked list.
 * @head: a pointer to the pointer of the first element
 * @index: the index of the node to be deleted
 * Return: 1 if succeeded, -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *tmp;
	listint_t *ptr;

	tmp = *head;
	ptr = *head;
	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		ptr = tmp->next;
		free(tmp);
		tmp = NULL;
		*head = ptr;
		return (1);
	}
	for (i = 0; i < index - 1; i++)
	{
		if (tmp == NULL)
			return (-1);
		tmp = tmp->next;
	}
	ptr = tmp->next->next;
	free(tmp->next);
	tmp->next = ptr;
	return (1);
}
