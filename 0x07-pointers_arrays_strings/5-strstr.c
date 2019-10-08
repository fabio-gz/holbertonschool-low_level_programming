#include "holberton.h"
/**
 *_strstr - locates a substring
 *@haystack: main string
 *@needle: string to search
 *Return: string searched
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, k, m, match;

	for (i = 0; haystack[i] != '\0'; i++)
	{
	}
	for (j = 0; needle[j] != '\0'; j++)
	{
	}
	for (k = 0; k <= (i - j); k++)
	{
		for (m = 0; needle[m] != '\0'; m++)
		{
			if (needle[m] == haystack[k + m])
			{
				match++;
			}
		}
		if (match == j)
		{
			return (haystack + k);
		}
		else
		{
			match = 0;
		}
	}
	return (0);
}
