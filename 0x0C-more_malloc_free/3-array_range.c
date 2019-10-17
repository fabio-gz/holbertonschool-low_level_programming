#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *array_range - create array of ints
 *@min: integer
 *@max: integer
 *Return: array of ints
 */
int *array_range(int min, int max)
{
	int *ar;
	int i;

	if (min > max)
	{
		return (NULL);
	}
	ar = malloc((max - min + 1) * sizeof(int));
	if (ar == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
		ar[i] = min++;
	return (ar);
}
