#include "main.h"
/**
 * _strcat - fonction
 * @dest: param
 * @src: param
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	for(i = 0; dest[i] != '\0'; i++);
	while(src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}
