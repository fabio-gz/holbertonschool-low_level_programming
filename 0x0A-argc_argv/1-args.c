#include <stdio.h>
#include <stdlib.h>
/**
 *main - prints number of arguments
 *@argc: count
 *@argv: string
 *Return: number of arguments
 */
int main(int argc, char *argv[])
{
	int n = 0;

	(void) argv;
	if (argc > n)
	{
		printf("%i\n", argc - 1);
	}
	return (0);
}
