#include "main.h"
/**
 * append_text_to_file - Appends text at the end of a file
 * @filename: pointer to name of the file
 * @text_content: The string to add to the end of the file
 * Return: -1 If the function fails or filename is NULL, and
 *	If the file does not exist the user lacks write permissions
 *	Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int opn, wrt, lng = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (lng = 0; text_content[lng];)
			lng++;
	}
	opn = open(filename, O_WRONLY | O_APPEND);
	wrt = write(opn, text_content, lng);
	if (opn == -1 || wrt == -1)
		return (-1);
	close(opn);
	return (1);
}
