#include "lists.h"
/**
 *get_nodeint_at_index - access nth node in list
 *@head: pointer to head of list
 *@index: int index
 *Return: index node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp = head;
	unsigned int i = 0;

	while (tmp != NULL)
	{
		if (i == index)
			return (tmp);
		i++;
		tmp = tmp->next;
	}
	return (head);
}
