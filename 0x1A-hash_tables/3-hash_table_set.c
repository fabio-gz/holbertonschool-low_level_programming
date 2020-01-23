#include "hash_tables.h"
/**
 *hash_table_set - adds an element to the hash table
 *@ht: hash table to add or update
 *@key: key
 *@value: value for the key
 *Return: 1 for success, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new, *nde;
	unsigned long int index;

	if (ht == NULL || key == NULL || ht->array == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	nde = ht->array[index];
	while (nde)
	{
		if (!strcmp(nde->key, key))
		{
			free(nde->value);
			nde->value = strdup(value);
			return (1);
		}
		nde = nde->next;
	}

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);

	new->key = strdup(key);
	if (new->key == NULL)
	{
		return (free(new->key), free(new), 0);
	}
	new->value = strdup(value);
	if (ht->array[index] != NULL)
		new->next = ht->array[index];
	else
		new->next = NULL;
	ht->array[index] = new;

	return (1);
}
