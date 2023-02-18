#include <stdio.h>

/**
 * main - prints the alphabets in reverse
 * Return: 0 (Success)
 */

int main(void)
{
	char le;

	for (le = 'z'; le >= 'a'; le--)
		putchar(le);

	putchar('\n');

	return (0);
}

