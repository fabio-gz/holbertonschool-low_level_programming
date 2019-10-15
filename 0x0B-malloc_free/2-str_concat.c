#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
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
 *str_concat - concatenate two strings
 *@s1: first string
 *@s2: second string
 *Return: string concatenated
 */
char *str_concat(char *s1, char *s2)
{
	char *conc;

	if (s1 == '\0')
		s1 = "";
	if (s2 == '\0')
		s2 = "";
	conc = malloc(((_strlen(s1) + _strlen(s2)) * sizeof(char)) + 1);
	if (conc == '\0')
		return (NULL);
	_strcat(conc, s1);
	_strcat(conc, s2);
	return (conc);
}
