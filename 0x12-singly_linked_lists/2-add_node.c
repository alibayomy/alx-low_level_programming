#include "lists.h"
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
/**
 * add_node - adds a new node to the beginning of the list
 * @head: a pointer to the node
 * @str: a string name of the str in the node
 * Return: the address of the new elements , NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	int i = 0;
	char *dp_str;
	list_t *tmp;

	if (*h == NULL)
		return (NULL);
	dp_str = strdup(str);
	while (dp_str[i] != '\0')
		i++;
	tmp = malloc(sizeof(list_t));
	if (tmp == NULL)
		return (NULL);
	tmp->next = *head;
	tmp->str = dp_str;
	tmp->len = i;
	*head = tmp;
	return (*head);
}
