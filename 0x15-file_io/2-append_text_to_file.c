#include "main.h"

/**
 * append_text_to_file - Appends text at end of a file.
 * @filename: Name of file to append the text to.
 * @text_content: Content to append.
 *
 * Return: 1 or -1 on success or failure respectively.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int filde, i, j = 0;

	if (!filename)
		return (-1);

	filde = open(filename, O_WRONLY | O_APPEND);
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
