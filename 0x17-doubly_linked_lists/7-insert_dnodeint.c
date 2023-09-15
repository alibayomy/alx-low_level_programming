#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: a pointer to the pointer of the first element of the list
 * @idx: the position to insert the node in, starting from 0
 * @n: the value of the node
 * Return: a pointer of the new node, NULL if failed
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *before;
	dlistint_t *after;
	dlistint_t *new_node;
	dlistint_t *tmp;
	unsigned int loop = 1;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;
	tmp = *h;
	if (idx == 0)
	{
		new_node->next = tmp;
		new_node->prev = NULL;
		if (tmp)
			tmp->prev = new_node;
		*h = new_node;
		return (new_node);
	}
	while (tmp)
	{
		if (loop == idx)
		{
			before = tmp;
			after = tmp->next;
			before->next = new_node;
			new_node->prev = before;
			new_node->next = after;
			new_node->next->prev = new_node;
			return (new_node);
		}
		loop++;
		tmp = tmp->next;
	}
	free(new_node);
	return (NULL);
}
