#include "main.h"
/**
 *read_textfile - function to read from file
 *@filename : the name of the file to read from
 *@letters : number of letters to read
 *Return:the number of data read and write
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, nr;
	char *c;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	c = malloc(sizeof(char) * letters);
	if (!c)
		return (0);
	nr = read(fd, c, letters);
	nr = write(STDOUT_FILENO, c, nr);
	close(fd);
	free(c);
	return (nr);
}
