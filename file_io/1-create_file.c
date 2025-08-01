#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/stat.h>
int calculate_length(char *text_content);
/**
* create_file - creates a file with rw------- permissions
* @filename: name of the file, if NULL, return -1
* @text_content: contents of the file. If NULL, create an empty file
* Return: 1 on success, -1 on failure
*/

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t wcount;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fd < 0)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		close(fd);
		return (-1);
	}

	wcount = write(fd, text_content, calculate_length(text_content));

	if (wcount == -1 || wcount != calculate_length(text_content))
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}


/**
*calculate_length - Calculate Lengh of a string
*@text_content: is a string
*Return: i
*/
int calculate_length(char *text_content)
{
	int i = 0;

	while (text_content[i] != '\0')
	{
		i++;
	}
	return (i);
}
