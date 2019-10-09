#include "holberton.h"
/**
 *_pow_recursion - x sqr y
 *@x: integer base
 *@y: raised value
 *Return: value after sqr
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, (y - 1)));
	}
}
