#include "holberton.h"
/**
 *puts2 - print every other char
 *@str: character
 */
void puts2(char *str)
{
	for (; *str != '\0'; str = str + 2)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
