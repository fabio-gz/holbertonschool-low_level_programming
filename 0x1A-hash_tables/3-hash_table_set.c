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
	hash_node_t *nde;
	unsigned long int index;

	if (ht == NULL || key == NULL || ht->array == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	if (ht->array[index] != NULL)
	{
		if (strcmp(ht->array[index]->key, key) == 0)
		{
			ht->array[index]->value = strdup(value);
			free(ht->array[index]->value);
			return (1);
		}
	}

	nde = malloc(sizeof(hash_node_t));
	if (nde == NULL)
		return (0);

	nde->key = strdup(key);
	nde->value = strdup(value);
	if (ht->array[index] != NULL)
		nde->next = ht->array[index];
	else
		nde->next = ht->array[index];

	ht->array[index] = nde;;

	return (1);
}
