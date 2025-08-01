#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include "main.h"
/**
*close_with_error - check the code
*@fd: file descriptor
*@exit_code: is the shut is failed
* Return: void.
*/
void close_with_error(int fd, int exit_code)
{
	if (close(fd) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd);
		exit(exit_code);
	}
}

/**
* main - check the code
*@argc: is a number of argument
*@argv: is an array of argument strings
* Return: Always 0.
*/

int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	char buffer[1024];
	ssize_t bytes_read;

	if (argc != 3)
		return (write(2, "Usage: cp file_from file_to\n", 29), 97);

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		return (dprintf(2, "Error: Can't read from file %s\n", argv[1]), 98);

	fd_to = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0666);
	if (fd_to == -1)
	{
		close(fd_from);
		return (dprintf(2, "Error: Can't write to file %s\n", argv[2]), 99);

	}

	while ((bytes_read = read(fd_from, buffer, 1024)) > 0)
		if (write(fd_to, buffer, bytes_read) != bytes_read)
			return close(fd_from), close(fd_to),
			       dprintf(2, "Error: Can't write to file %s\n", argv[2]), 99;

	if (bytes_read == -1)
		return (dprintf(2, "Error: Can't read from file %s\n", argv[1]), 98);

	close_with_error(fd_from, 100);
	close_with_error(fd_to, 100);
	return (0);
}
