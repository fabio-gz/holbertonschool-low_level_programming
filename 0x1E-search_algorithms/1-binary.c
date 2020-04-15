#include "search_algos.h"
/**
 *binary_search - binary search
 *@array: array to look on
 *@size: array size
 *@value: value to look for
 *Return: value index
 */
int binary_search(int *array, size_t size, int value)
{
	unsigned int middle, left, right, i;

	left = 0;
	right = size - 1;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		middle = ((left + right) / 2);

		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i != right)
			{
				printf(", ");
			}
		}
		printf("\n");

		if (array[middle] == value)
		{
			return (middle);
		}
		else if (array[middle] < value)
		{
			left = middle + 1;
		}
		else if (array[middle] > value)
		{
			right = middle - 1;
		}
	}
	return (-1);
}
