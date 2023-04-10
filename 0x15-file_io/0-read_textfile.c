#include "main.h"

/**
 * read_textfile -  function that reads a text file and prints it
 * to the POSIX standard output.
 * @filename: input name
 * @letters: number of letters
 * Return: ssize_t
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file_d, file_w, file_r;
	char *str;

	file_d = open(filename, O_RDONLY);
	if (file_d == -1)
		return (0);
	str = malloc(sizeof(char) * letters);
	file_r = read(file_d, str, letters);
	file_w = write(STDOUT_FILENO, str, file_r);
	free(str);
	close(file_d);

	return (file_w);
}
