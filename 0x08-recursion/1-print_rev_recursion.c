#include "holberton.h"
/**
 *_print_rev_recursion - prints reverse string
 *@s: string
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(++s);
		_putchar(*s);
	}
	_putchar('\n');
}
