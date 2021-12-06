#include "holberton.h"

/**
 * create_file -Entry point
 * @filename: file name
 * @text_content: null terminated string to write
 * Return: 1
 */
int create_file(const char *filename, char *text_content)
{
	int file, i = 0;

	if (filename == NULL)
		return (-1);

	file =open(filename, 0-CREATE | 0_WRONLY, 0600);
	if (file == -1)
		return (-1);

	while (text_content[i])
		i++;
	

	if (text_content == NULL)
	{
		close(file);
		return (-1);
	
	write(file, text_content, i);
	}

	close(file);
	return (1);
}
