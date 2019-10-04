#include "holberton.h"
/**
 *rot13 - rot13 encode
 *@s: string
 *Return: string encoded
 */
char *rot13(char *s)
{
	int i, n;
	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char e[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (n = 0; a[n] != '\0'; n++)
		{
			if (s[i] == a[n])
			{
				s[i] = e[n];
				break;
			}
		}
	}
	return (s);
}
