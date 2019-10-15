#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *_strlen - lenght of a string
 *@s: char for string
 *Return: int lenght
 */
int _strlen(char *s)
{
	int n = 0;

	for (; s[n] != '\0';)
	{
		n++;
	}
	return (n);
}
/**
 *_strcpy -copy a string
 *@dest: destination of copy
 *@src: source to be copied
 *Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
/**
 *_strdup - return pointer of a copied string
 *@str: string
 *Return: copied string pointer
 */
char *_strdup(char *str)
{
	char *cpy;

	if (str == '\0')
		return ('\0');
	cpy = malloc(_strlen(str) * sizeof(char));
	if (cpy == '\0')
		return ('\0');
	_strcpy(cpy, str);
	return (cpy);
}
