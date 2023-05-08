#include "main.h"
/**
 * create_file - Creates a file
 * @filename: A pointer to the name of the file
 * @text_content: A pointer to a string to write to the file
 * Return: -1 when tthe function fails,
 *		Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int fld, we, lng = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (lng = 0; text_content[lng];)
			lng++;
	}
	fld = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	we = write(fld, text_content, lng);
	if (fld == -1 || we == -1)
		return (-1);
	close(fld);
	return (1);
}
