#include "holberton.h"
/**
 *_strlen_recursion - lenght of a string
 *@s: string
 *Return: integer
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s != '\0')
	{
		i = _strlen_recursion(++s);
		i++;
	}
	return (i);
}
