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
 *argstostr - concatenate all aguments
 *@ac: integer count
 *@av: argument strings
 *Return: arguments concatenates one per line
 */
char *argstostr(int ac, char **av)
{
	int n, m, p = 0;
	char *str;
	char *newli;

	newli = "\n";

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	else
	{
		for (n = 0; n < ac; n++)
		{
			p++;

			for (m = 0; av[n][m] != '\0'; m++)
			{
				p++;
			}
		}
		str = malloc(sizeof(char) * p + 1);
		for (n = 0; n < ac; n++)
		{
			str = _strcat(str, av[n]);
			if (str == NULL)
				return (NULL);

			if ((n + 1) < ac)
			{
				str = _strcat(str, newli);
				if (str == NULL)
					return (NULL);
			}
	}
	str = _strcat(str, newli);
	if (str == NULL)
		return (NULL);
	return (str);
	}
}
