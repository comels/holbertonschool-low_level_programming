#include "main.h"
/**
 * _memset - fonction
 * @s: param
 * @b: param
 * @n: param
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
