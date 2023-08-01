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

	if (*head = NULL)
		return (NULL);
	if (idx == 0)
	{
		tmp = (*head);
		*head = ptr;
		(*head)->next = tmp;
		return (ptr);
	}
	tmp = *head;
	for (i = 0;  i < idx - 1; i++)
	{
		if (tmp == NULL || tmp->next == NULL)
		{
			ptr = NULL;
			return (NULL);
		}
		tmp = tmp->next;
	}
	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = NULL;
	hold = tmp->next;
	tmp->next = ptr;
	ptr->next = hold;
	return (ptr);
}
