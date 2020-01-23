#include "hash_tables.h"
/**
 *hash_table_delete - delete hash table
 *@ht: pointer to table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned int i;
	hash_node_t *nde;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			while (ht->array[i] != NULL)
			{
				nde = ht->array[i]->next;
				free(ht->array[i]->key);
				free(ht->array[i]->value);
				free(ht->array[i]);
				ht->array[i] = nde;
			}
			free(ht->array[i]);
		}
	}
	free(ht->array);
	free(ht);
}
