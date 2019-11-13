#include "holberton.h"
/**
 *main - copies a file
 *@argc: argument count
 *@argv:argument vector
 *Return: 0
 */
int main(int argc, char *argv[])
{
	int file[2];
	char buf[1024];
	int re, wr, cl = 0;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file[0] = open(argv[1], O_RDONLY);
	if (file[0] == -1)
	{ dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98); }
	file[1] = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file[1] == -1)
	{ dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99); }
	while ((re = read(file[0], buf, sizeof(buf))) > 0)
	{
		if (re == -1)
		{dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98); }
		wr = write(file[1], buf, re);
		if (wr == -1)
		{ dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99); }
	}
	cl = close(file[0]);
	if (cl == -1)
	{ dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file[0]);
		exit(100); }
	cl = close(file[1]);
	if (cl == -1)
	{ dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file[1]);
		exit(100); }
	return (0);
}
