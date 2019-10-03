#include "holberton.h"
/**
 *_strncat - concatenate two strings
 *@dest: destination
 *@src: source
 *@n: number of bytes
 *Return: character with n bytes
 */
char *_strncat(char *dest, char *src, int n)
{
	char *str = dest;
	int m, i;

	for (; dest[m] != '\0';)
	{
		m++;
	}

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[m + i] = src[i];
	}
	dest[m + i] = '\0';
	return (str);
}
