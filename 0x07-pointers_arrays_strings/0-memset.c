#include "holberton.h"
/**
 *_memset - fills memory with constant byte
 *@s: string
 *@b: string
 *@n: size
 *Return: constant byte
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
