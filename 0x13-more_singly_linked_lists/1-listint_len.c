#include "lists.h"
/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h: a pointer to the first element of  the list
 * Return: the number of the elements in the linked list
 */
size_t listint_len(const listint_t *h)
{
	int elements = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		h = h->next;
		elements++;
	}
	return (elements);
}
