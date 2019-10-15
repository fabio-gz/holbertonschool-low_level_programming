#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 *create_array - create an array of chars
 *@size: integer size
 *@c: character
 *Return: a buffer
 */
char *create_array(unsigned int size, char c)
{
	char *A;
	unsigned int i;

	if (size == 0)
	{
		return ('\0');
	}

	A = malloc(sizeof(c) * size);
	for (i = 0; i < size; i++)
	{
		if (A == '\0')
		{
			return ('\0');
		}
		A[i] = c;
	}
	return (A);
}
