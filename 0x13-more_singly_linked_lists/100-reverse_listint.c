#include "lists.h"
/**
 *reverse_listint - reverses a list
 *@head: pointer to head of list
 *Return: pointer to the first node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *new = NULL;

	while (*head != NULL)
	{
		new = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = new;
	}
	*head = prev;

	return (*head);
}
