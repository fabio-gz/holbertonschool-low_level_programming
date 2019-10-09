#include "holberton.h"
/**
 *factorial - returns factorial
 *@n: integer
 *Return: factorial value
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
