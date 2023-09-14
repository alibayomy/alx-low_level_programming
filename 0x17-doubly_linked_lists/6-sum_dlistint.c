#include "lists.h"
/**
 * sum_dlistint - sum of all the data (n) of a dlistint_t linked list.
 * @head: a pointer of the first node in linked list
 * Return: the sum of all the node in linked list, 0 if list is empty
*/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum = sum + head->n;
		head = head->next;
	}

	return (sum);
}
