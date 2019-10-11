#include "holberton.h"
/**
 *_strlen - lenght of string
 *@s: string
 *Return: lenght
 */
int _strlen(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;
	return (_strlen(s) + 1);
}
/**
 *compar - compare two strings
 *@s: string
 *@n: integer
 *Return: bool
 */
int compar(char *s, int n)
{
	if (*s != *(s + n))
	{
		return (0);
	}
	else if (*s == '\0')
	{
		return (1);
	}
	return (compar(s + 1, n - 2));
}
/**
 *is_palindrome - check if string is palindrome
 *@s: string to evaluate
 *Return: bool
 */
int is_palindrome(char *s)
{
	int n;

	n = _strlen(s);
	return (compar(s, n - 1));
}
