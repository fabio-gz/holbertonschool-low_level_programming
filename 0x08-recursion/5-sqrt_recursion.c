/**
 *sqrt_initial - looping
 *@a: integer
 *@b: integer
 *Return: value match of sqrt
 */
int sqrt_initial(int a, int b)
{
	if (a * a == b)
	{
		return (a);
	}
	else if (a * a > b)
	{
		return (-1);
	}
	else
	{
		return (sqrt_initial(a + 1, b));
	}
}

#include "holberton.h"
/**
 *_sqrt_recursion - square root of a number
 *@n: base
 *Return: value squared
 */
int _sqrt_recursion(int n)
{
	return (sqrt_initial(1, n));
}
