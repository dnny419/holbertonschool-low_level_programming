#include "holberton.h"
/**
 * append_text_to_file - function that appends text at the end of a file.
 * @filename: name of the file to be written
 * @text_content: text to write on the file
 * Return: 1 on success, 0 otherwise.
 */
void copy_file(const char *first, const char *second)
{
	int open1, open2, i, readFrom, writeTo;
	char *buffer[1024];

	open1 = open(first, O_RDONLY);
	if (open1 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", first);
		exit(98);
	}

	open2 = open(first, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (open2 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", second);
		exit(99);
	}

	for (i = 1024; i == 1024;)
	{
		readFrom = read(open1, buffer, 1024);
		if (readFrom < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", first);
			exit(98);
		}
		writeTo = write(open2, buffer, readFrom);
		if (writeTo < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", second);
			exit(99);
		}
	}
	cerrar(readFrom, writeTo);
}

/**
 * cerrar - close all open files.
 * @filefrom: file from.
 * @fileto: file to.
 */
void cerrar(int fileto, int filefrom)
{
	int a, b;

	a = close(fileto);
	if (a == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fileto);
		exit(100);
	}
	b = close(filefrom);
	if (b == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", filefrom);
		exit(100);
	}
}

int main(int ac, char **av)
{
	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	if (!av[1])
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	if (!av[2])
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	copy_file(av[1], av[2]);
	return (0);
}
