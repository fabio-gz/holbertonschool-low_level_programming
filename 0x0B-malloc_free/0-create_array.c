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
	if ((char *)malloc(size) == '\0')
	{
		return ('\0');
	}
	A = malloc(sizeof(size) * c);
	for (i = 0; i < size; i++)
	{
		A[i] = c;
	}
	return (A);
}
