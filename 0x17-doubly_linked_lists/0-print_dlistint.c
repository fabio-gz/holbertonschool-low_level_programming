#include "lists.h"

/**
 *print_dlistint - print all elements of the list
 *@h: lists nodes
 *Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int n = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		n++;
	}
	return (n);
}
