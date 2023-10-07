#include "main.h"
/**
 *append_text_to_file - function that appends text at the end of a file
 *@filename:is the name of the file
 *@text_content:terminated string to add at the end of the file
 *Return: 1 on success and -1 on failure
 *
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, lrw, ln = 0;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0)
		return (-1);
	if (text_content)
	{
		while (text_content[ln] != '\0')
			ln++;
		lrw = write(fd, text_content, ln);
		if (lrw < 0)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
