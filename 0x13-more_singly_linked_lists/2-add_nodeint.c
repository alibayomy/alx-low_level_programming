#include "lists.h"
/**
 * add_nodeint - adds a new node to the beginning of the list
 * @head: a pointer to the first element of the linked list
 * @n: the value of n of the new node
 * Return: a pointer to the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *tmp =  NULL;
	listint_t *node;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = NULL;
	tmp = *head;
	*head = node;
	node->next = tmp;
	return (*head);
}
