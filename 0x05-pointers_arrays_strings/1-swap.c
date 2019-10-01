#include "holberton.h"
/**
 *swap_int - swap the value of two ints
 *@a: int one
 *@b: int two
 */
void swap_int(int *a, int *b)
{
	int t = *a;
	*a = *b;
	*b = t;
}
