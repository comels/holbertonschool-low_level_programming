#include "main.h"
/**
 * rot13 - fonction
 * @s: param
 * Return: s
 */
char *rot13(char *s)
{
	int alpha[] = {65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78,
		       79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 97,
		       98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108,
		       109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119,
		       120, 121, 122};

	int rot[] = {'A', 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 65, 66,
		     67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 110, 111, 112,
		     113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 97, 98, 99,
		     100, 101, 102, 103, 104, 105, 106, 107, 108, 109};
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == alpha[j])
			{
				s[i] = rot[j];
				break;
			}
		}
	}
	return (s);
}
