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
	char *buffe;
	ssize_t file;
	ssize_t wd;
	ssize_t te;

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	buffe = malloc(sizeof(char) * letters);
	te = read(file, buffe, letters);
	wd = write(STDOUT_FILENO, buffe, te);

	free(buffe);
	close(file);
	return (wd);
}
