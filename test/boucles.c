#include <stdio.h>
/**
 * main - fonction
 * Return:0
 */

int main(void)
{
	int i = 0;

	while (i < 5)
	{
		printf("Alerte !\n");
		i++;
	}

	i = 6;
	/* Pour faire le programme avant le while */

	do {
		printf("Bonjour !\n");
		i++;
	} while (i < 5);
	return (0);
}
