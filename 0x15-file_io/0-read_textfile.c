#include "main.h"
/**
 * read_textfile - Reads a text file then prints it to the standard output.
 * @filename: Name of the file read.
 * @letters: Letters to read and print.
 * Return: Number of letters printed, or 0 if it function fails.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int filde;
	int j, m;
	char *buffer;

	if (!filename)
		return (0);
	filde = open(filename, O_RDONLY);
	if (filde < 0)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);
	j = read(filde, buffer, letters);
	if (j < 0)
	{
		free(buffer);
		return (0);
	}
	buffer[j] = '\0';
	close(filde);
	m = write(STDOUT_FILENO, buffer, j);
	if (m < 0)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	return (m);
}
