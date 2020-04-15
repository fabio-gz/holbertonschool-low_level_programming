#include "search_algos.h"
/**
 *jump_search - jump search algorith
 *@array: array to look on
 *@size: array size
 *@value: value to look for
 *Return: index value
 */
int jump_search(int *array, size_t size, int value)
{
	unsigned int steps, i, j, prev;

	steps = sqrt(size);

	if (array == NULL || size == 0)
		return (-1);
	i = 0;
	while (i < size)
	{
		prev = i;
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		i = i + steps;
		if (array[i] >= value)
			break;
	}

	printf("Value found between indexes [%d] and [%d]\n", prev, i);

	for (j = prev; j < size; j++)
	{
		printf("Value checked array[%d] = [%d]\n", j, array[j]);
		if (array[j] == value)
			return (j);
	}
	return (-1);
}
