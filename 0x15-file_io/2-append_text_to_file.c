#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: input file name
 * @text_content: content
 * Return: 1 or -1
 */

int append_text_to_file(const char *filename, char *text_content)
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
	file_d = open(filename, O_WRONLY | O_APPEND);
	file_w = write(file_d, text_content, i);
	if (file_w == -1 || file_d == -1)
		return (-1);
	close(file_d);

	return (1);
}

