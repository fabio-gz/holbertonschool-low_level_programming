#include "holberton.h"
/**
 *_strpbrk - search a string for a set of bytes
 *@s: string
 *@accept: string to look
 *Return: string
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				s = s + i;
				return (s);
			}
		}
	}
	return (0);
}
