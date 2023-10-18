#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: filename.
 * @text_content: content to be added
 *
 * Return: file exist 1, doesn't exist -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int d;
	int nletter;
	int wr;

	if (!filename)
		return (-1);

	d = open(filename, O_WRONLY | O_APPEND);

	if (d == -1)
		return (-1);

	if (text_content)
	{
		for (nletter = 0; text_content[nletter]; nletter++)
			;

		wr = write(d, text_content, nletter);

		if (wr == -1)
			return (-1);
	}

	close(d);

	return (1);
}
