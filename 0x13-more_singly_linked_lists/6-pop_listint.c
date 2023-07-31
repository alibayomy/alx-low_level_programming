#include "lists.h"
/**
 * pop_listint -  a function that deletes
 *	the head node of a listint_t linked list
 * @head: a poitner to the pointer of the first element in the list
 * Return:  the head node’s data (n), 0 if empty
 */
int pop_listint(listint_t **head)
{
	int value;
	listint_t *tmp;

	if (*head == NULL)
		return (0);
	value = (*head)->n;
	tmp = (*head)->next;
	free(*head);

	*head = tmp;
	return (value);
}
