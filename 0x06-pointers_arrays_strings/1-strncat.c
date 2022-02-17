#include "main.h"
/**
 * _strncat - fonction
 * @dest: param
 * @src: param
 * @n: param
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
		if (src[j] == '\0')
			break;
	}
	return (dest);
}
