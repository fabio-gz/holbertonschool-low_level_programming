#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *_strlen - lenght of a string
 *@s: char for string
 *Return: int lenght
 */
int _strlen(const char *s)
{
	int n = 0;

	for (; s[n] != '\0';)
	{
		n++;
	}
	return (n);
}
/**
 *binary_to_uint - converts binary to int
 *@b: string of numbers
 *Return: converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int i, n, res;

	res = 0;

	if (b == NULL)
		return (0);

	for (n = _strlen(b) - 1, i = 0; n >= 0 ; --n)
	{
		if ((b[n] - '0') != 0 && (b[n] - '0') != 1)
		{
			return (0);
		}
		else
		{
			res += ((b[n] - '0') << i);
			++i;
		}
	}
	return (res);
}
