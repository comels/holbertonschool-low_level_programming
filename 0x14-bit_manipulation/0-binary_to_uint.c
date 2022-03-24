#include "main.h"

/**
* binary_to_uint - fonction
* @b: param
* Return: unsigned int
*/

unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int sum = 0;
	unsigned int mul = 1;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
		;
	i--;
	for (; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}

		if (b[i] == '1')
			sum += mul;
		mul *= 2;
	}
	return (sum);
}
