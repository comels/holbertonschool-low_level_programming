#include "main.h"
/**
 * _memcpy - fonction
 * @dest: param
 * @src: param
 * @n: param
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
