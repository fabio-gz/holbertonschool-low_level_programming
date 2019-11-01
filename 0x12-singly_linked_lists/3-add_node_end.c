#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 *add_node_end - add new node to the end
 *@head: start of the node
 *@str: string provided
 *Return: address of the new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *last = *head;
	int n;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	for (n = 0; str[n] != '\0';)
	{
		n++;
	}

	new->str = strdup(str);
	new->len = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		while (last->next != 0)
		{
			last = last->next;
		}
		last->next = new;
	}
	return (new);
}
