#include <stdio.h>
/**
 * _isdigit - fonction
 * Return: 0 ou 1
 */
int _isdigit(int c)
{
	if (c > 47 && c < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
