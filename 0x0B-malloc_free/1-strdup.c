#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - fonction
 * @str: param
 * Return: cp
 */
char *_strdup(char *str)
{
	int i = 0;
	int j = 0;
	char *cp;

	if (str == 0)
		return (NULL);

	while (str[i] != '\0')
		i++;

	cp = malloc(sizeof(char) * (i + 1));

	if (cp == 0)
		return (NULL);

	for (j = 0; j < i; j++)
		cp[j] = str[j];
	cp[j] = '\0';
	return (cp);
}
