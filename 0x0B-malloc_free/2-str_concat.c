#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *str_concat - fonction
 * @s1: param
 * @s2: param
 * Return: char
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	int size;
	char *s3;

	while (s1[i] != '\0')
		i++;

	while (s2[j] != '\0')
		j++;

	size = i + j + 1;

	s3 = malloc(sizeof(char) * size);

	if (s3 == 0)
		return (s3);

	for (i = 0; s1[i] != '\0'; i++)
		s3[i] = s1[i];

	for (j = 0; s2[j] != '\0'; j++)
		s3[i + j] = s2[j];

	return (s3);
}
