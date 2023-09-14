#include "lists.h"
/**
 * get_dnodeint_at_index - get the nth node in the linked list
 * @head: a pointer to the first node of the list
 * @index: is the index of the node, starting from 0
 * Return: the wanted node, NULL if not found
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int loop = 0;

	while (head)
	{
		if (loop == index)
			return (head);
		head = head->next;
		loop++;
	}
	return (NULL);
}
