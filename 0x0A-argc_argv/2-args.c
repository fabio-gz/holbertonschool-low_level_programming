#include <stdio.h>
/**
 *main - print all arguments
 *@argc: argument count
 *@argv: argument vector
 *Return: arguments per line
 */
int main(int argc, char *argv[])
{
	int n;

	for (n = 0; n < argc; n++)
	{
		printf("%s\n", argv[n]);
	}
	return (0);
}
