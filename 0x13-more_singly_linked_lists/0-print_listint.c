#include "lists.h"
/**
 *print_listint - print all elements in the list
 *@h: pointer to node
 *Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
