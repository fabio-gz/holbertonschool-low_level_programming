#include "lists.h"
/**
 *add_dnodeint - adds node at the beginning of list
 *@head: head of list
 *@n: node data
 *Return: address of the new element or NULL if failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	if (*head != NULL)
	{
		(*head)->prev = new;
	}

	new->n = n;
	new->prev = NULL;
	new->next = *head;
	*head = new;
	if (new != NULL)
	{
		return (new);
	}
	else
	{
		return (NULL);
	}
}
