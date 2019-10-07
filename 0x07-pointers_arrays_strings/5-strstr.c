#include "holberton.h"
/**
 *_strstr - locates a substring
 *@haystack: main string
 *@needle: string to search
 *Return: string searched
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; needle[i] != '\0'; i++)
	{
		for (j = 0; haystack[j] != '\0'; j++)
		{
			if (needle[i] == haystack[j])
			{
				while ((haystack[j + i] == needle[i] &&
					needle[i] != '\0'))
				{
					return (&haystack[j]);
				}
			}
		}
	}
	return (0);
}
