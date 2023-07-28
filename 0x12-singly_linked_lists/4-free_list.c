#include "lists.h"
#include <stdlib.h>
/**
* free_list -  frees a list_t list.
* @head: the head of the linked list
*/
void free_list(list_t *head)
{
	list_t *ptr;

	if (head == NULL)
		return;
	while (head->next)
	{
		ptr = head->next;
		free(head->str);
		free(head);
		head = ptr;
	}
	free(head->str);
	free(head);
}
