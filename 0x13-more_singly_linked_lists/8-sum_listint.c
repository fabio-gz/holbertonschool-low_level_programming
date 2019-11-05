#include "lists.h"
/**
 *sum_listint - sum data of list
 *@head: pointer to head
 *Return: values summed
 */
int sum_listint(listint_t *head)
{
	listint_t *tmp = head;
	int sum = 0, i;

	if (!head)
		return (0);

	while (tmp != NULL)
	{
		sum += tmp->n;
		i++;
		tmp = tmp->next;
	}
	return (sum);
}
