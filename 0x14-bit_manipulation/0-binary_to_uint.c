#include <stdio.h>
#include "main.h"
#include <string.h>
#include <math.h>

/**
 * binary_to_uint - converts binary to uint
 * @b: pointer to the character array in binary to be converted
 * Return: converted number if successful, else 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int m = 1;
	unsigned int res = 0;
	int c;
	unsigned int len;

	if (!b)
		return (0);

	len = strlen(b);

	for (c = len - 1; c >= 0; c--)
	{
		if (b[c] < '0' || b[c] > '1')
			return (0);
		if (b[c] == '1')
	{
		res += m;
	}
		m *= 2;
	}
	return (res);
}
