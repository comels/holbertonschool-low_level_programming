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
		j = 0;

		if (haystack[i] == needle[j])
		{
			while (needle[j] != '\0' && haystack[i + j] == needle[j])
			{
				j++;
			}
		}
		else
		{
			i++;
		}


		if (needle[j] == '\0')
			return (&haystack[i]);
		else
			i++;
	}
	return (0);
}
