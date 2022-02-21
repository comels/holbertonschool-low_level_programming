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

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++);
		{
			if (haystack[i] == needle[j])
				return (needle);
		}
	}
	if (haystack[i] == needle[j])
		 return (needle);
	return (0);
}
