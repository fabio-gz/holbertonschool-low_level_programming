#include "holberton.h"
/**
 *_strchr - locates char is a string
 *@s: string
 *@c:char to alocate
 *Return: string changed
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; s++)
	{
		if (s[i] == c)
		{
			for (i = 0; s[i] != '\0'; i++)
			{
				return (s);
			}
		}
	}
	return (s);
}
