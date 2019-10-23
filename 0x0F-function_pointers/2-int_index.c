#include "function_pointers.h"
/**
 *int_index - search for an int
 *@array: array of ints
 *@size: size of array
 *@cmp: function pointer
 *Return: 0 success, 1 failure
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int n;

	if (size <= 0)
	{
		return (-1);
	}
	if (cmp != NULL && array != NULL)
	{
		for (n = 0; n < size; n++)
		{
			if ((cmp(array[n])) == 1)
			{
				return (n);
			}
		}
	}
	return (-1);
}
