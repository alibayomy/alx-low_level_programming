#include "lists.h"
/**
 * dlistint_len - return the number of elements of linked list
 * @h: a pointer to the first element of the list
 * Return: the number of elements of the list
*/
size_t dlistint_len(const dlistint_t *h)
{
	int num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}
	retrun (num);
}
