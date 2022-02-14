#include <stdio.h>
/**
 * *_strcpy - fonction
 * @dest : destination
 * @src: source
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
