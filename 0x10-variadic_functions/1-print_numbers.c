#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 *print_numbers - print numbers
 *@separator: string separator
 *@n: number of arguments
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i;
	int value;

	va_start(numbers, n);
	for (i = 0; i < n; i++)
	{
		value = va_arg(numbers, int);
		printf("%i", value);
		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(numbers);
}
