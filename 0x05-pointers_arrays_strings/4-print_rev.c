#include "holberton.h"
/**
 *print_rev - print string in reverse
 *@s: character
 */
void print_rev(char *s)
{
	int n;
	int i;

	for (; s[n] != '\0';)
	{
		n++;
	}
	i = n - 1;

	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
