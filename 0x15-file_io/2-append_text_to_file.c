#include "holberton.h"
/**
 * _strlen - function that gets the length of a string.
 * @str: text received
 * Return: total length of the string.
 */
size_t _strlen(char *str)
{
	size_t i;

	for (i = 0; str[i] != '\0'; i++)
		;

	return (i);
}
/**
 * create_file - function that appends text at the end of a file.
 * @filename: name of the file to be written
 * @text_content: text to write on the file
 * Return: 1 on success, 0 otherwise.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int opn, fd;

	if (filename == NULL)
	{
		return (-1);
	}

	opn = open(filename, O_WRONLY | O_APPEND);
	if (opn < 0)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		fd = write(opn, text_content, _strlen(text_content));
		if (fd < 0)
		{
			return (-1);
		}
	}

	if (fd < 0)
		return (-1);

	close(opn);
	return (1);
}
