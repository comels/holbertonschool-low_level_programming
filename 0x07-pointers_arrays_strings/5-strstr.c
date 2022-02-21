#include "main.h"
/**
 * _strstr - fonction
 * @needle: param
 * @haystack: param
 * Return: 0
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j = 0;

	while (needle[j] != '\0')
		j++;

	while (*haystack)
	{
		for (i = 0; needle[i] != '\0'; i++)
		{
			if (haystack[i] != needle[i])
				break;
		}
		if (i != j)
			haystack++;
		else
			return (haystack);
	}
	return (0);
}
