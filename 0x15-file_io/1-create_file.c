#include "main.h"

/**
 * create_file - Creates a file then fills it with text.
 * @filename: Name of file to be created.
 * @text_content: Text to be written in the file.
 *
 * Return: 1 or -1 on success or failure respectively.
 */
int create_file(const char *filename, char *text_content)
{
	int filde, i, j = 0;

	if (!filename)
		return (-1);

	filde = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (filde < 0)
		return (-1);

	if (text_content)
	{
		while (text_content[j])
			j++;
		i = write(filde, text_content, j);
		if (i != j)
			return (-1);
	}

	close(filde);

	return (1);
}
