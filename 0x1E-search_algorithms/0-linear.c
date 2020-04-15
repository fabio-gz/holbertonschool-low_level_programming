#include "search_algos.h"
/**
 *linear_search - linear search algorith
 *@array: array to look
 *@size: array size
 *@value: value to search
 *Return: value index
 */
int linear_search(int *array, size_t size, int value)
{
	unsigned int i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
