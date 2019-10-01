#include "holberton.h"
/**
 *_strlen - lenght of a string
 *@s: char for string
 *Return: int lenght
 */
int _strlen(char *s)
{
	int n;

	for (; s[n] != '\0';)
	{
		n++;
	}
	return (n);
}
