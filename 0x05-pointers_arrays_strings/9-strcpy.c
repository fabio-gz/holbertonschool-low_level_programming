#include "holberton.h"
/**
 *_strcpy -copy a string
 *@dest: destination of copy
 *@src: source to be copied
 *Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
