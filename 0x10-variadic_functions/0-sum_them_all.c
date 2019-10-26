#include "variadic_functions.h"
#include <stdarg.h>
/**
 *sum_them_all - sum all parameters
 *@n: number of arguments
 *Return: values summed
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list argument;
	int sum = 0;
	unsigned int i;

	va_start(argument, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(argument, int);
	}
	va_end(argument);

	return (sum);
}
