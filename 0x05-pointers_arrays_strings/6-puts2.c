#include "holberton.h"
/**
 *puts2 - print every other char
 *@str: character
 */
void puts2(char *str)
{
	int n, i;

	for (; str[n] != '\0';)
	{
		n++;
	}

	for (i = 0; i < n; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
