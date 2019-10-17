#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *_calloc - allocares memory set to zero
 *@nmemb:number of block to allocate
 *@size: size of each block
 *Return: a pointer to a block of memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *call;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	call = malloc(size * nmemb);

	for (i = 0; i < (size * nmemb); i++)
	{
		if (call == NULL)
			return (NULL);

		call[i] = 0;
	}
	return (call);
}
