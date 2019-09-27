#include "holberton.h"
/**
 *print_diagonal - prints a '\'
 *@n: integer
 */
void print_diagonal(int n)
{
	if (n > 0)
	{
		int i;
		int m;

		for (i = 0; i < n; i++)
		{
			for (m = 0; m < n; ++m)
			{
				if (m < i)
				{
					_putchar(' ');
				}
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
