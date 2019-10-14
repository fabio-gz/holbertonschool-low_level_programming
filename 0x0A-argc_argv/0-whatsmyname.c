#include <stdio.h>
/**
 *main - prints its name
 *@argv: argument vector
 *@argc: argument count
 *Return: string with name of program
 */
int main(int argc, char *argv[])
{
	int n = 0;

	if (n < argc)
	{
		printf("%s\n", argv[n]);
	}
	return (0);
}
