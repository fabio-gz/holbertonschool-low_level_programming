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
 *string_nconcat - concatenates two strings
 *@s1: string 1
 *@s2: string 2
 *@n: number of char two concatenate
 *Return: string concatenated
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *conc;
	unsigned int i, j;

	if (s1 == '\0')
		s1 = "";
	if (s2 == '\0')
		s2 = "";

	conc = malloc(sizeof(char) * (_strlen(s1) + n + 1));
	if (conc == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
	{
		conc[i] = s1[i];
	}
	for (j = 0; j < n && s2[j] != '\0'; j++)
	{
		conc[i] = s2[j];
		i++;
	}
	conc[i] = '\0';
	return (conc);
}
