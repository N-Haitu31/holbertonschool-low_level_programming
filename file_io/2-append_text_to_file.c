#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/stat.h>
int calculate_length(char *text_content);

/**
 * append_text_to_file - appends text to a file
 * @filename: file to append to, if NULL, return -1
 * @text_content: content to append, if NULL, do not append
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wcount, len;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		len = calculate_length(text_content);
		wcount = write(fd, text_content, len);
	}

	if (wcount == -1 || wcount != len)
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
