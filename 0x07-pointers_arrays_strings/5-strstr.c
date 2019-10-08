#include "holberton.h"
/**
 *_strstr - locates a substring
 *@haystack: main string
 *@needle: string to search
 *Return: string searched
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		if (*haystack == *needle)
		{
			for (; *needle != '\0'; needle++)
			{
				return (needle);
			}
		}
	}
	return (needle);
}
