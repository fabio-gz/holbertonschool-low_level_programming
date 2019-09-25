#include "holberton.h"
/**
 *_abs - return absolute value
 *@n: integer parameter
 *Return:0
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	return (n);
}
