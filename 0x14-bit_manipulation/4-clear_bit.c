#include "holberton.h"
/**
 *clear_bit - set bit to 0
 *@n: pointer to value
 *@index: values index
 *Return: 1 on success, -1 if failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m = 0;

	if (index > 32)
		return (-1);

	while (m <= index)
	{
		*n = *n & ~(1 << index);
		m++;
	}
	return (1);
}
