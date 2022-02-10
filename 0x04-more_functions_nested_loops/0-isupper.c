#include <stdio.h>
/**
 * _isupper
 * @c: para
 * Return: 0 ou 1
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
