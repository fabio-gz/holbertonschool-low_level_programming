#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 *add_node - adds new node
 *@head: start of the list
 *@str: string provided
 *Return:new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	char *lenght = strdup(str);
	int n;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}

	for (n = 0; lenght[n] != '\0';)
	{
		n++;
	}

	new->str = strdup(str);
	new->len = n;
	new->next = *head;
	*head = new;
	return (new);
}
