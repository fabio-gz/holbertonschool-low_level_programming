#include "holberton.h"
/**
 *flip_bits - number of bits to flip to get to other num
 *@n:value to evaluate
 *@m: number of bits
 *Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int bits,  i = 0;

	bits = n ^ m;

	while (bits != 0)
	{
		i = i + (bits & 1);
		bits = bits >> 1;
	}
	return (i);
}
