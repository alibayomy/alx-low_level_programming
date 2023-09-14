#include "lists.h"
/**
 * print_dlistint - print all the elements of alinked list
 * @h: a pointer to the first node of the list
 * Return: the number of the nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
	int num = 0;

	while (h)
	{
		num++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (num);
}
