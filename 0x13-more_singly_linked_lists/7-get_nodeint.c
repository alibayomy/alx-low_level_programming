#include "lists.h"
/**
 * get_nodeint_at_index - get the nth node of a listint_t linked list.
 * @head: a pointer to the first element of the list
 * @index: the node index to be returned
 * Return: the node at index :index, NULL if it doesnt exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp;
	unsigned int i = 1;

	tmp = head;
	for (i = 0; i < index; i++)
	{
		if (tmp == NULL)
			return (NULL);
		tmp = tmp->next;
	}
	return (tmp);
}
