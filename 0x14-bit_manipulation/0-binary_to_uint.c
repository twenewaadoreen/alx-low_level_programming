#include <stdio.h>
#include "main.h"

/**
 * _atoi - covert string to integer
 * @s: string to be coverted
 * Return: the integer converted from the string
*/
int _atoi(const char *s)
{
	int i, n, len;
	int digit;

	digit = 0;
	len = 0;
	n = 0;
	while (s[len] != '\0')
		len++;
	for (i = 0; i < len ; i++)
	{
		digit = s[i] - '0';
		if (digit == 0 || digit == 1)
		{
			n = n * 10 + digit;
		}
		else
		{
			return (0);
		}
	}
	return (n);
}


/**
 * _power - calcuate a number raised to the power of another number
 * @num: number(base)
 * @po: power
 * Return: integer
*/
int _power(int num, int po)
{
	int i, result;

	result = 1;
	for (i = 1 ; i <= po; i++)
	{
		result = result * num;
	}
	return (result);
}

/**
 * binary_to_uint - converting binary to integer
 * @b: string of binary digits
 * Return: integer
*/
unsigned int binary_to_uint(const char *b)
{
	int num, dig, result, count, len, sum;
	const int base = 2;

	num = _atoi(b);
	len = 0;
	if (b[len] == '\0')
		return (0);
	while (b[len] != '\0')
		len++;
	count = 0;
	sum = 0;
	while (num > 0)
	{
		dig = num % 10;
		result = dig * (_power(base, count));
		sum = sum + result;
		num = num / 10;
		count++;
	}
	return (sum);
}
