#include "holberton.h"
/**
 *print_alphabet - print the alphabet and a new line
 *
 */
void print_alphabet(void)
{
	int n = 'a';

	while (n <= 'z')
	{
		_putchar(n);
		n++;
	}
	_putchar('\n');
}
