#include <stdio.h>
/**
 * main - fonction
 * Return: 0
 */

int main(void)
{
	/*
	 * + (addition)
	 * - (soustraction)
	 * * (multiplication)
	 * / (division) 5 / 2 = 2
	 * % (modulo) 5 % 2 = 1
	 * variable = variable + X --> variable += X
	 * variable++ = incrémentation de 1
	 */

	int calcul = 6 + 4;

	printf("%d\n", calcul);

	/* On peut faire aussi directement printf("%d\n", 6 + 4); */

	int nb1 = 6;
	int nb2 = 4;

	printf("%d\n", nb1 + nb2);

	int niveaudujoueur = 1;

	printf("Niveau : %d\n", niveaudujoueur);

	niveaudujoueur += 5;
	printf("Niveau : %d\n", niveaudujoueur);

	return (0);
}
