#include "main.h"
/**
 * print_binary - prints the binary of a decimal
 * @n: decimal form of the number
 */
void print_binary(unsigned long int n)
{
	int k, count = 0;
	unsigned long int numb;

	for (k = 63; k >= 0; k--)
	{
		numb = n >> k;

		if (numb & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
