#include "holberton.h"
/**
 * read_textfile - function that reads a text file and
 * prints it to the POSIX standard output.
 * @filename: name of the file to be read
 * @letters: number of letters that will be read
 * Return: Total amount of letters read.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file, fd;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		return (0);
	}

	file = open(filename, O_RDONLY);
	if (file < 0)
	{
		free(buffer);
		return (0);
	}

	fd = read(file, buffer, letters);
	write(STDOUT_FILENO, buffer, fd);
	close(file);

	return (fd);
}
