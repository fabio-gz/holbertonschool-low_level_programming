#include "holberton.h"
/**
 *leet - convers into 1337
 *@s: string
 *Return: string
 */
char *leet(char *s)
{
	int i, n;
	char l[] = "aAeEoOtTlL";
	char u[] = "4433007711";

	for (n = 0; s[n] != '\0'; n++)
	{
		for (i = 0; l[i] != '\0'; i++)
		{
			if (s[n] == l[i])
			{
				s[n] = u[i];
			}
		}
	}
	return (s);
}
