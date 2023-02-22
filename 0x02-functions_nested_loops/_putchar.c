#include <unistd.h>

/**
 * putchar - writes the character c
 * @c: The character to print
 * Return: 0 (Success)
 * On error, -1 is returned, and errno is set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

