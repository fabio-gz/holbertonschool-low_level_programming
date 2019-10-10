#include "holberton.h"
/**
 *prime_initial - check if prime
 *@a: integer
 *@b: integer
 *Return: bool
 */
int prime_initial(int a, int b)
{
	if (a == b)
	{
		return (1);
	}
	else if (b % a == 0 || b <= 1)
	{
		return (0);
	}
	else
	{
		return (prime_initial(a + 1, b));
	}
}
/**
 *is_prime_number - check if is prime num
 *@n: integer
 *Return: bool
 */
int is_prime_number(int n)
{
	int m = 2;

	return (prime_initial(m, n));
}
