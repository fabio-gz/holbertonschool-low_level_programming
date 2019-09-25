#include "holberton.h"
#include <stdio.h>
/**
 *print_to_98 - print up to 98
 *@n: takes an int
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		for ( ; n >= 98; n--)
		{
			printf("%i", n);
			if (n == 98)
			{
			}
			else
			{
				printf(", ");
			}
		}
	}
	else
	{
		for ( ; n <= 98; n++)
		{
			printf("%i", n);
			if (n == 98)
			{
			}
			else
			{
				printf(", ");
			}
		}
	}
	printf("\n");
}
