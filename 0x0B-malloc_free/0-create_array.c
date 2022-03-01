#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *create_array - fonction
 * @size: param
 * @c: param
 * Return: 0
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *str;

	if (size == 0)
		return (NULL);

	str = malloc(sizeof(char) * size);

	if (str == 0)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
