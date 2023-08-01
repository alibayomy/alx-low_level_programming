#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: a pointer to the pointer of the first element of the list
 * @idx: the index to place the new node
 * @n: the n value of the new node
 * Return: the address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *tmp;
	listint_t *ptr;
	listint_t *hold;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = NULL;
	tmp = *head;
	for (i = 0;  i < idx; i++)
	{
		if (tmp == NULL)
		{
			free (ptr);
			ptr == NULL;
			return (NULL);
		}
		tmp = tmp->next;
	}
	hold = tmp->next;
	tmp->next = ptr;
	ptr->next = hold;
	return (ptr);
}
