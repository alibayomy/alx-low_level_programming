#include "lists.h"
/**
 * delete_dnodeint_at_index -  deletes the node at index index of a
 *  dlistint_t linked list.
 * @head: a pointer to the pointer of the first node
 * @index: the index of the node starting from 0
 * Return: 1 on success, -1 if failed
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *before, *after, *tmp;
	unsigned int loop = 0;

	if (*head == NULL)
		return (-1);
	tmp = *head;
	if (index == 0)
	{
		after = tmp->next;
		free(tmp);
		*head = after;
		*head->prev = NULL;
		return (1);
	}
	while (loop != index)
	{
		if (tmp == NULL)
			return (-1);
		tmp = tmp->next;
		loop++;
	}
	before = tmp->prev;
	after = tmp->next;
	free(tmp);
	before->next = after;
	return (1);
}
