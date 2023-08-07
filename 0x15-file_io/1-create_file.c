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
	int file, we, lg = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (lg = 0; text_content[lg];)
			lg++;
	}
	file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	we = write(file, text_content, lg);
	if (file == -1 || we == -1)
		return (-1);
	close(file);
	return (1);
}
