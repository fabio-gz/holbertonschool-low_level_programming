#include "holberton.h"
/**
 *_strcat - concatenate two strings
 *@dest: destination
 *@src: source
 *Return: character
 */
char *_strcat(char *dest, char *src)
{
	char *str = dest;

	for (; *dest != '\0';)
	{
		dest++;
	}
	for (; *src != '\0';)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (str);
}
