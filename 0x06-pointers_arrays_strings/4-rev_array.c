#include "holberton.h"
/**
 *reverse_array - print reverse array
 *@a: integers array
 *@n: amount of elements
 */
void reverse_array(int *a, int n)
{
	int i;

	for (; a[n] != '\0';)
	{
		a++;
	}
	i = n - 1;

	for (; i > 0; i--)
	{
		_putchar(a[i]);
	}
	_putchar('\n');
}
