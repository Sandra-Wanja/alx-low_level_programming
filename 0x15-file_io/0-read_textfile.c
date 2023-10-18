#include "main.h"

/**
 * read_textfile - read txtfile, print to stdout
 * @filename: file
 * @letters: number of letters
 *
 * Return: (success) number of letters, failure 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int n;
	ssize_t nrd, nwr;
	char *uf;

	if (!filename)
		return (0);

	n = open(filename, O_RDONLY);

	if (n == -1)
		return (0);

	uf = malloc(sizeof(char) * (letters));
	if (!uf)
		return (0);

	nrd = read(n, uf, letters);
	nwr = write(STDOUT_FILENO, uf, nrd);

	close(n);

	free(uf);

	return (nwr);
}
