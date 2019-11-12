#include "holberton.h"
/**
 *create_file - creates a file
 *@filename: file to create
 *@text_content: file content
 *Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, i;
	int n = 0;

	for (; text_content[n] != '\0';)
		n++;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		text_content = "";
	}

	i = write(fd, text_content, n);
	if (i == -1)
		return (-1);

	close(fd);
	return (1);
}
