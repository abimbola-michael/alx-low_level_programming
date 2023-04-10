#include "main.h"

void closefile(int file_d);
char *createnew_buffer(char *file);


/**
 * createnew_buffer - created buffer of 1024 bytes
 * @file: input file
 * Return: char pointer
 */

char *createnew_buffer(char *file)
{
	char *char_buffer;

	char_buffer = malloc(sizeof(char) * 1024);

	if (char_buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}

	return (char_buffer);
}


/**
 * closefile - function used to close file descriptor
 * @file_d: input file descriptor
 * Return: void
 */

void closefile(int file_d)
{
	int file_c;

	file_c = close(file_d);
	if (file_c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_d);
		exit(100);
	}
}

/**
 * main - program that copies the content of a file
 * to another file
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int file_from, file_to, file_r, file_w;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = createnew_buffer(argv[2]);
	file_from = open(argv[1], O_RDONLY);
	file_r = read(file_from, buffer, 1024);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (file_from == -1 || file_r == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from %s\n", argv[1]);
			free(buffer);
			exit(98);
		}
		file_w = write(file_to, buffer, file_r);
		if (file_to == -1 || file_w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		file_r = read(file_from, buffer, 1024);
		file_to = open(argv[2], O_WRONLY | O_APPEND);
	} while (file_r > 0);

	free(buffer);
	closefile(file_from);
	closefile(file_to);

	return (0);
}

