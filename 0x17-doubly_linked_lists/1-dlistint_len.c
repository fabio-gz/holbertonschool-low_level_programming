#include "lists.h"

/**
 *dlistint_len - return number of elements in list
 *@h: head pointer
 *Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int n = 0;

	while (h != NULL)
	{
		h = h->next;
		n++;
	}
	return (n);
}
