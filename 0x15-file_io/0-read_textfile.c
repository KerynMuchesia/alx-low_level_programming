#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: pointer to file name
 * @letters: number of letters it should read and print
 *
 * Return: actual number of letters it could read and print
 *         0 if the file can not be opened or read
 *         0 if filename is NULL
 *         0 if write fails or does not write the expected amount of bytes
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	 ssize_t a, b, c;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer ==  NULL)
		return (0);

	a = open(filename, O_RDONLY);
	b = read(o, buffer, letters);
	c = write(STDOUT_FILENO, buffer, b);

	if (a == -1 || b == -1 || c == -1 || c != b)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(o);

	return (c);

}
