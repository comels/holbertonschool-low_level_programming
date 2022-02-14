#include <stdio.h>
/**
 * *_strcpy - fonction
 * @dest : destination
 * @src: source
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] >= '\0')
	{
		dest[i] = src[i];
		if (src[i] == '\0')
			return (0);
		i++;
	}
	return (dest);
}
