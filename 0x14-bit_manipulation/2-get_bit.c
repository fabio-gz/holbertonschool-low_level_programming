#include "holberton.h"
/**
 *get_bit - gives it of index
 *@n: value
 *@index: binary index
 *Return: bit index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (index > 32)
		return (-1);

	for (i = 0; i < index; i++)
	{
		n = n >> 1;
	}
	return (n & 1);
}
