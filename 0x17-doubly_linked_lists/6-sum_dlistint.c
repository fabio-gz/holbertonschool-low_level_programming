#include "lists.h"
/**
 *sum_dlistint - sum  all the data in the list
 *@head: head pointer
 *Return: sum of ints
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = head;
	int sum = 0;

	while (tmp != NULL)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
