#include "lists.h"
#include <stdlib.h>
/**
 *free_list - free a list
 *@head: head of the list
 */
void free_list(list_t *head)
{
	if (head != NULL)
	{
		free(head->str);
		free_list(head->next);
	}
	free(head);
}
