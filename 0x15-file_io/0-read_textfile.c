#include "main.h"
#include <stdlib.h>
/**
 * read_textfile- Read text file, print to STDOUT.
 * @filename: text file
 * @letters: number of letters
 * Return: wd- actual number of bytes read and printed
 * 0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	ssize_t fld;
	ssize_t wd;
	ssize_t te;

	fld = open(filename, O_RDONLY);
	if (fld == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	te = read(fld, buff, letters);
	wd = write(STDOUT_FILENO, buff, te);

	free(buff);
	close(fld);
	return (wd);
}
