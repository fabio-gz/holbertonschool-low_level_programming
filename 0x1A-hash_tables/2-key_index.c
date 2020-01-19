#include "hash_tables.h"
/**
 *key_index - gives the index of a key
 *@key: key for the table
 *@size: hash table size
 *Return: index of key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned int hash_val;

	hash_val = hash_djb2(key);
	return (hash_val % size);
}
