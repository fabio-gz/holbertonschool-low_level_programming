#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 *print_all - prints anything
 *@format: types of arguments passed
 */
void print_all(const char * const format, ...)
{
	int i, num, cha;
	double flo;
	char *string;
	va_list argmt;

	va_start(argmt, format);

	i = 0;
	while (format[i] != '\0')
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", cha = va_arg(argmt, int));
			break;
		case 'i':
			printf("%i", num = va_arg(argmt, int));
			break;
		case 'f':
			printf("%f", flo = va_arg(argmt, double));
			break;
		case 's':
			if (string == NULL)
				printf("(nil)");
			printf("%s", string = va_arg(argmt, char *));
			break;
		default:
			i++;
			continue;
		}
		if (i < format[i + 1])
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(argmt);
}
