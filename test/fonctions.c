#include <stdio.h>
/**
 * main - fonction
 * Return: 0
 *
 * bonjour - fonction bonjour
 *
 * initball - fonction init
 */

int initball(int posX)
{
	posX = 100;
	return (posX);
}

int main(void)
{
	int balleX;

	balleX = initball(balleX);
	printf("Avant la partie : %d\n", balleX);

	/* Une partie de jeu se fait... */

	balleX = initball(balleX);
	printf("Après la partie : %d\n", balleX);

	return (0);
}

void bonjour(void)
{
	printf("Bonjour !\n");
}

int main(void)
{
	bonjour();
	return (0);
}
