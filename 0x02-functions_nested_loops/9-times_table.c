#include "holberton.h"
/**
 *times_table - print a table 9 times
 */
void times_table(void)
{
	int n = 0;
	int m;
	int p;

	while (n < 10)
	{
		_putchar('0');
		m = 1;
		while (m < 10)
		{
			_putchar(',');
			_putchar(' ');
			p = n * m++;
			if (p < 10)
			{
				_putchar(' ');
				_putchar(p + '0');
			}
			else
			{
				_putchar((p / 10) + '0');
				_putchar((p % 10) + '0');
			}
		}
		_putchar('\n');
		n++;
	}
}
