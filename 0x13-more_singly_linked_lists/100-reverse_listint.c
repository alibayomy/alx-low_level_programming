#include "lists.h"
/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: a pointer to the pointer of the first element
 * Return: a pointer to the first node of the reversed element
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *tmp;
	listint_t *ptr;

	tmp = *head;
	ptr = *head;
	while (tmp->next)
	{
		tmp = tmp->next->next;
		ptr->next = ptr; 
		ptr = tmp;
