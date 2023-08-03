#include "main.h"

/**
 * binary_to_uint - function converts a binary number to unsigned int
 * @b: str containing the binary number
 *
 * Return: the converted num
 */
unsigned int binary_to_uint(const char *b)
{
	int k;
	unsigned int dec_v = 0;

	if (!b)
		return (0);

	for (k = 0; b[k]; k++)
	{
		if (b[k] < '0' || b[k] > '1')
			return (0);
		dec_v = 2 * dec_v + (b[k] - '0');
	}

	return (dec_v);
}
