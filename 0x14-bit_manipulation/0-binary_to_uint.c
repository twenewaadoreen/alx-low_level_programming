#include "main.h"
/**
 * binary_to_uint - converts binary number to unsigned int
 * @b: string of binary values
 * Return: the converted integer
 */
unsigned int binary_to_uint(const char *b)
{
	int j;
	unsigned int res = 0;

	if (!b)
		return (0);
	for (j = 0; b[j]; j++)
	{
		if (b[j] < '0' || b[j] > '1')
			return (0);
		res = 2 * res + (b[j] - '0');
	}
	return (res);
}
