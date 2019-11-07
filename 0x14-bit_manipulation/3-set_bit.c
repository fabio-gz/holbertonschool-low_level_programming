#include "holberton.h"
/**
 *set_bit - sets value of bit to 1
 *@n: pointer to value
 *@index: index of value
 *Return: 1 on success, -1 if failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m = 0;

	if (index > 32)
		return (-1);

	while (m <= index)
	{
		*n = *n | (1 << index);
		m++;
	}
	return (1);
}
