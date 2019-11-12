#include "holberton.h"
/**
 *read_textfile - read text file and prints it to stout
 *@filename: text files
 *@letters: number of letters
 *Return: number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, i, m;

	char *buf = malloc(sizeof(char) * letters);

	if (buf == NULL)
		return ('\0');

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	m = read(fd, buf, letters);
	buf[letters] = '\0';

	i = write(STDOUT_FILENO, buf, m);
	if (i == -1)
		return (0);

	close(fd);
	return (i);
}
