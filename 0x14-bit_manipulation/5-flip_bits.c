#include "main.h"
/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int t, count = 0;
	unsigned long int numb;
	unsigned long int exec = n ^ m;

	for (t = 63; t >= 0; t--)
	{
		numb = exec >> t;
		if (numb & 1)
			count++;
	}
	return (count);
}
