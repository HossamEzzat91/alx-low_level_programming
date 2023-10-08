#include "main.h"
/**
 * error_handel - function to handel error
 *@n1:inthger
 *@n2:intger
 *@argv:vlue
 * Return: void.
 */
void error_handel(int n1, int n2, char *argv[])
{

	if (n1 == -1)
	{
		dprintf(2, "Error: Can't read from %s\n", argv[1]);
		exit(98);
	}
	if (n2 == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}
/**
 * main - check the code.
 * @argc:argumets
 * @argv:value
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, err, nread, nwrite;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_handel(file_from, file_to, argv);
	while ((nread = read(file_from, buffer, 1024)) > 0)
	{
		nwrite = write(file_to, buffer, 1024);
		if (nwrite == -1)
			error_handel(0, -1, argv);
	}
	if (nread == -1)
		error_handel(-1, 0, argv);
	err = close(file_from);
	if (err == -1)
	{
		dprintf(2, "Error: Can't close %d\n", file_from);
		exit(100);
	}
	err = close(file_to);
	if (err == -1)
	{
		dprintf(2, "Error: Can't close %d\n", file_to);
		exit(100);
	}
	return (0);
}

