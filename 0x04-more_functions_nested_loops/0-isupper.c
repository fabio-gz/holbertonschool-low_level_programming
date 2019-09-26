#include "holberton.h"
/**
 *_isupper - check if upper or lower
 *@c: integer for character in ascii
 *Return:1 for upper, 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
