#include "function_pointers.h"
/**
 *array_iterator - execute functions
 *@array: array of integers
 *@size: size of array
 *@action: pointer to a function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int n;

	for(n = 0; n < size; n++)
	{
		action(array[n]);
	}
}
