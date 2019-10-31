#include "lists.h"
/**
 *list_len - calculates number of elements in list
 *@h: node
 *Return: integer
 */
size_t list_len(const list_t *h)
{
	int n = 0;

	while (h != NULL)
	{
		h = h->next;
		n++;
	}
	return (n);
}
