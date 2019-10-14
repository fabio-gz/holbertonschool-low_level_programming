#include <stdio.h>
#include <stdlib.h>
/**
 *main - multiplies two numbers
 *@argc: argument count
 *@argv: argument vector
 *Return: result of the product
 */
int main(int argc, char *argv[])
{
	int mul = 0;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	}
	return (0);
}
