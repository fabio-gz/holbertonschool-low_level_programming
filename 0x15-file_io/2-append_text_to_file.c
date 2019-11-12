#include "holberton.h"
/**
 *append_text_to_file - appends test to the file
 *@filename: name of the file
 *@text_content: content of the file
 *Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i;
	int n = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		text_content = "";
	}

	for (; text_content[n] != '\0';)
		n++;

	i = write(fd, text_content, n);
	if (i == -1)
		return (-1);

	close(fd);
	return (1);
}
