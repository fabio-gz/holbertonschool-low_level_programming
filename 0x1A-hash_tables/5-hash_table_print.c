#include "hash_tables.h"
/**
 *hash_table_print - prints a hash table
 *@ht: pointer to hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int i;
	hash_node_t *nde;
	char *sep;

	if (ht == NULL)
		return;

	printf("{");
	sep = "";

	for (i = 0; i < ht->size; i++)
	{
		nde = ht->array[i];
		while (nde != NULL)
		{
			printf("%s'%s': '%s'", sep, nde->key, nde->value);
			sep = ", ";
			nde = nde->next;
		}
	}
	printf("}\n");
}
