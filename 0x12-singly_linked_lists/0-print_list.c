#include "lists.h"
#include <stdio.h>
/**
 * print_list - prints all the elements of a given linked list
 * @h: a pointer to the first node  in list_t;
 * Return: the number of the nodes
 */
size_t print_list(const list_t *h)
{
	int nodes_num = 0;
	while (h != NULL)
	{
		if (h->str)
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		else
			printf("[%d] %s\n", 0, "(nil)");
		h = h->next;
		nodes_num++;
	}
	return (nodes_num);
}
