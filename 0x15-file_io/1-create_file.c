#include "main.h"
/**
 *create_file - function to create new file
 *@filename:the desire filename
 *@text_content:the file content
 *Return: 1 in sucss, -1 faluire
 *
 */
int create_file(const char *filename, char *text_content)
{
	int fd, lwr, ln = 0;

	if (!filename)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd < 0)
		return (-1);
	if (text_content != 0)
	{
		while (text_content[ln] != '\0')
			ln++;
		lwr = write(fd, text_content, ln);
		if (lwr < 0)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}


