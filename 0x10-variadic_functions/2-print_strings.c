#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 *print_strings - print a string
 *@separator: string separator
 *@n: number of arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list string;
	unsigned int i;
	char *words;

	va_start(string, n);
	for (i = 0; i < n; i++)
	{
		words = va_arg(string, char*);
		if (words == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", words);
		}
		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(string);
}
