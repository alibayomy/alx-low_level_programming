#include "lists.h"
/**
 * add_dnodeint - adds a node at the beginning of linked list
 * @head: a pointer to the first element of the list
 * @n: the value of the new node
 * Return: the address of  the new node
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *tmp;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}
	tmp = *head;
	tmo->prev = new_node;
	new_node->next = tmp;
	*head = new_node
	return (new_node);
}
