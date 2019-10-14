#include <stdio.h>
#include <stdlib.h>
/**
 *main - sums of two numbers
 *@argv: argument vector
 *@argc: argument count
 *Return: result integer
 */
int main(int argc, char *argv[])
{
	int n;
	int sum = 0;

	if (argc > 1)
	{
		for (n = 0; n < argc; n++)
		{
			if (atoi(argv[n]) < 48 && atoi(argv[n]) > 57)
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
