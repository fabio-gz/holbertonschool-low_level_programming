#include "holberton.h"
/**
 *print_triangle - print a triangle of size
 *@size: integer
 */
void print_triangle(int size)
{
	if (size > 0)
	{
		int s;
		int n;
		int p;

		for (n = 0; n < size; n++)
		{
			for (s = n; s < size - 1; s++)
			{
				_putchar(' ');
			}
			for (p = n + size; p > size - 1; p--)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
