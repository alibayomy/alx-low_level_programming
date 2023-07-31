#include "lists.h"
/**
 * print_listint -  prints all the elements of a listint_t list.
 * @h: a pointer to to the first element of the list
 * Return: the number of  the nodes in the linked list
 */
size_t print_listint(const listint_t *h)
{
	int elements = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		elements++;
	}
	return (elements);
}
