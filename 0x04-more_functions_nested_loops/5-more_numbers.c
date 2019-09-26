#include "holberton.h"
/**
 *more_numbers - 0 to 14 ten times
 */
void more_numbers(void)
{
	int n;
	int m;

	for (n = 0; n <= 10; n++)
	{
		for (m = 0; m < 15; m++)
		{
			if (m >= 10)
			{
				_putchar(m / 10 + '0');
			}
			_putchar(m % 10 + '0');
		}
		_putchar('\n');
	}
}
