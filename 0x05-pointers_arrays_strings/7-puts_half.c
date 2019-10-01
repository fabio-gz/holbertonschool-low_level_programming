#include "holberton.h"
/**
 *puts_half - prints second half of string
 *@str: string
 */
void puts_half(char *str)
{
	int n, i;

	for (; str[n] != '\0';)
	{
		n++;
	}

	if (n % 2 == 0)
	{
		for (i = n / 2; i < n; i++)
		{
			_putchar(str[i]);
		}
	}
	else if (n % 2 == 1)
	{
		for (i = ((n - 1) / 2); i < n; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
