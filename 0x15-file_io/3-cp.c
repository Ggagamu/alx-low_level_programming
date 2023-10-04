#include "main.h"

/**
 * main - Copies content from one file to another.
 * @argc: Number of arguments passed.
 * @argv: Array of arguments passed.
 *
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int filde_r, filde_w, i, j, k;
	char buffer[BUFSIZ];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	filde_r = open(argv[1], O_RDONLY);
	if (filde_r < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	filde_w = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((i = read(filde_r, buffer, BUFSIZ)) > 0)
	{
		if (filde_w < 0 || write(filde_w, buffer, i) != i)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(filde_r);
			exit(99);
		}
	}
	if (i < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	j = close(filde_r);
	k = close(filde_w);
	if (j < 0 || k < 0)
	{
		if (j < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", filde_r);
		if (k < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", filde_w);
		exit(100);
	}
	return (0);
}
