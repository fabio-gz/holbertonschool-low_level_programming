#include "holberton.h"
/**
 *print_last_digit - print the last digit of int
 *@n: integer parameter
 *Return:0 success
 */
int print_last_digit(int n)
{
	if (n < 0)
	{
		n = ((n % 10) * -1);
		_putchar(n + '0');
	}
	else
	{
		n = (n % 10);
		_putchar(n + '0');
	}
	return (n);
}
