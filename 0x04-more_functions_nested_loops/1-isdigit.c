#include "holberton.h"
/**
 *_isdigit - check if the value is a number
 *@c: integer
 *Return:1 if digit, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
