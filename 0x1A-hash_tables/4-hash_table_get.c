#include "hash_tables.h"
/**
 *hash_table_get - retrieves a value associate with a key
 *@ht: pointer to hast table
 *@key: key to look
 *Return: value associate with the element or NULL if fail
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned int index;
	hash_node_t *elem;

	if (key == NULL || ht == NULL)
		return (NULL);

	index = key_index((unsigned const char *)key, ht->size);
	elem = ht->array[index];

	while (elem != NULL)
	{
		if (strcmp(elem->key, key) == 0)
			return (elem->value);

		elem = elem->next;
	}

	return (NULL);
}
