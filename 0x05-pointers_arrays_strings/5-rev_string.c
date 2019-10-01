#include "holberton.h"
/**
 *rev_string - reverse a string
 *@s: string
 */
void rev_string(char *s)
{
	int n;
	int i, m;

	for (; s[n] != '\0';)
	{
		n++;
	}
	m = n - 1;

	for (i = 0; i < n / 2; i++)
	{
		char t = s[i];

		s[i] = s[m - i];
		s[m - i] = t;
	}
}
