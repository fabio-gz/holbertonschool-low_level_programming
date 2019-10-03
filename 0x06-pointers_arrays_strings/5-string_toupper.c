#include "holberton.h"
/**
 *string_toupper - converts lowercase to uppercase
 *@st: string
 *Return: string
 */
char *string_toupper(char *st)
{
	int i;

	for (i = 0; st[i] != '\0'; i++)
	{
		if (st[i] >= 97 && st[i] <= 122)
		{
			st[i] = st[i] - 32;
		}
	}
	return (st);
}
