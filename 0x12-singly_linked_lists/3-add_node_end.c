#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: a pointer to the first of the linked list
 * @str: the name of the str in the new node
 * Return:the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *dp_str;
	int i = 0;
	list_t *ptr;
	list_t *tmp;

	dp_str = strdup(str);
	while (dp_str[i] != '\0')
		i++;
	ptr = malloc(sizeof(list_t));
	if (ptr == NULL)
		return (NULL);
	ptr->str = dp_str;
	ptr->len = i;
	ptr->next = NULL;
	if (*head == NULL)
	{
		*head = ptr;
		return (ptr);
	}
	tmp = *head;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = ptr;
	return (ptr);
}
