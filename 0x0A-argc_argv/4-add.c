#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 *main - sums of two numbers
 *@argv: argument vector
 *@argc: argument count
 *Return: result integer
 */
int main(int argc, char *argv[])
{
	int n;
	int m = 0;
	int sum = 0;

	if (argc > 1)
	{
		for (n = 1; n < argc; n++)
		{
			if (!(isdigit(argv[n][m])))
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				sum += atoi(argv[n]);
			}
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
