#include "holberton.h"
/**
 *_islower - check if lowercase, parameter 'c' is an int
 *@c: take an int as parameter
 *Return: 1 or 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
