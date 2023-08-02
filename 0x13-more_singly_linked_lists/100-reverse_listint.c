#include "lists.h"
/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: a pointer to the pointer of the first element
 * Return: a pointer to the first node of the reversed element
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *before = NULL;
	listint_t *after = *head;

	while ((*head)->next)
	{
		(*head) = (*head)->next;
		after->next = before;
		before = after;
		after = *head;
	}
	(*head)->next = before;
	return (*head);
}
