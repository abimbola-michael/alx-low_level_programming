#include "main.h"

/**
 * create_file -  function that creates a file
 * @filename: input filename
 * @text_content: input string
 * Return: 1 or -1
 */


int create_file(const char *filename, char *text_content)
{
	int file_d, file_w;
	int i = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[i])
			i++;
	}
	file_d = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	file_w = write(file_d, text_content, i);
	if (file_w == -1 || file_d == -1)
		return (-1);
	close(file_d);

	return (1);
}


