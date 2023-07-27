#include "lists.h"
/**
 * list_len - give back the number of the nodes in linked list
 * @h: a pointer to the first node
 * Return: the number of the nodes in  the linked list
 */
size_t list_len(const list_t *h)
{
	int nodes_num = 0;

	while (h != NULL)
	{
		h = h->next;
		nodes_num++;
	}
	return (nodes_num);
}
