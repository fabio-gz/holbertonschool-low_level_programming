#include "holberton.h"
/**
 *cap_string - capitalizes all words
 *@s: string
 *Return: string
 */
char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i == 0)
		{
			if (s[i] >= 'a' && s[i] <= 'z')
			{
				s[i] = s[i] - 32;
			}
		}
		if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' || s[i] == '.'
		    || s[i] == ',' || s[i] == ';' || s[i] == '!' || s[i] == '?'
		    || s[i] == '\"' || s[i] == '(' || s[i] == ')'
		    || s[i] == '{' || s[i] == '}')
		{
			++i;
		if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' || s[i] == '.'
		    || s[i] == ',' || s[i] == ';' || s[i] == '!' || s[i] == '?'
		    || s[i] == '\"' || s[i] == '(' || s[i] == ')'
		    || s[i] == '{' || s[i] == '}')

			++i;

			if (s[i] >= 'a' && s[i] <= 'z')
			{
				s[i] = s[i] - 32;
			}
		}
	}
	return (s);
}
