#include "holberton.h"
/**
 *print_square - print a square
 *@size: square size
 */
void print_square(int size)
{
	if (size > 0)
	{
		int i;
		int n;

		for (i = 0; i < size; i++)
		{
			for (n = 0; n < size; n++)
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
