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
	while (haystack[i] != '\0')
	{
		while (needle[j] != '\0' && needle[j] == haystack[i]
		       && haystack[i] != '\0')
		{
			i++;
			j++;
		}
		if (needle[j] == '\0')
		{
			return (haystack + i);
		}
		i = i + 1;
	}
	return (0);
}
