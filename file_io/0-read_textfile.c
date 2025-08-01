#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
*read_textfile - fuction that read a text file and print it, 'Requiescat'.
*  @filename: body of text to print.
* @letters: max char to print.
* Return: number of chars printed.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t bytes_read, written;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == (-1))
		return (0);

	buffer = malloc(letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	bytes_read = read(fd, buffer, letters);
	if (bytes_read == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	written = write(STDOUT_FILENO, buffer, bytes_read);
	if (written == -1 || written != bytes_read)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	free(buffer);
	close(fd);
	return (bytes_read);

}
