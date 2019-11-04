#include "lists.h"
/**
 *listint_len - print number of elements in the list
 *@h:pointer to node
 *Return: integer
 */
size_t listint_len(const listint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
