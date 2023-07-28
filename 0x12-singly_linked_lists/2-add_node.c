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
	list_t *tmp;

	tmp = malloc(sizeof(list_t));
	if (tmp == NULL)
		return (NULL);
	while (str[i])
		i++;
	tmp->next = *head;
	tmp->str = strdup(str);
	tmp->len = i;
	*head = tmp;
	return (tmp);
}
