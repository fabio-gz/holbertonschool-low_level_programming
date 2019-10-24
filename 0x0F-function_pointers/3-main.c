#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *main - check if code is correct
 *@argc: number of arguments
 *@argv: argument vector
 *Return: 0 on sucess
 */
int main(int argc, char *argv[])
{
	int operation;
	int (*func)(int, int);

	if (argc == 4)
	{
		int n = atoi(argv[1]);
		int m = atoi(argv[3]);

		func = get_op_func(argv[2]);
		operation = func(n, m);
		printf("%d\n", operation);
		return (0);
	}
	else
	{
		printf("Error\n");
		exit(98);
	}
	if (*argv[2] != '+' && *argv[2] != '-' && *argv[2] != '*' && *argv[2] !=
	    '/' && *argv[2] != '%')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*argv[2] == '/' || *argv[2] == '%') && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (0);
}
