#include "holberton.h"
/**
 *jack_bauer - prints every minute of the day
 *Return:0 success
 */
void jack_bauer(void)
{
	int n;
	int m;

	for (n = 0;  n < 24; n++)
	{
		for (m = 0; m < 60; m++)
		{
			_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
			_putchar(':');
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			_putchar('\n');
		}
	}
}
