#include "holberton.h"
#include <stdio.h>
/**
 *main - copies a file
 *@argc: argument count
 *@argv:argument vector
 *Return: file copied
 */
int main(int argc, char *argv[])
{
	int file[2];
	char buf[1024];
	int re1, count = 0;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	if (argv[1] == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
			argv[1]);
		exit(98);
	}

	file[0] = open(argv[1], O_RDONLY);
	if (file[0] == -1)
		return (-1);

	re1 = read(file[0], buf, sizeof(buf));

	file[1] = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file[1] == -1)
	{
		close(file[0]);
		return (-1);
	}
	count = write(file[1], buf, re1);

	return (count);
}
