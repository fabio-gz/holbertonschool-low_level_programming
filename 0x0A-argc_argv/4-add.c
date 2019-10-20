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
	int m;
	int sum = 0;

	if (argc > 1)
	{
		for (n = 1; n < argc; n++)
		{
			for (m = 0; argv[n][m] != '\0'; m++)
			{
				if (!(isdigit(argv[n][m])))
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[n]);
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
