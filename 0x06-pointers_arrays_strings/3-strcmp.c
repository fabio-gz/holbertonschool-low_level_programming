#include "holberton.h"
/**
 *_strcmp - compares two strings
 *@s1: first string
 *@s2: second string
 *Return: integer
 */
int _strcmp(char *s1, char *s2)
{
	int n;

	n = *s1 - *s2;
	return (n);
}
