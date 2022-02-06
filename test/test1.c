#include <stdio.h>
/**
 * main - fonction principale
 * Return: 0
 */

int main(void)
{
	int nombre = 124;
	/* const pour dire que la variable ne peut pas être modifiée. */
	const float autrenombre = 35.46;
	/*
	 * %d : nombre entier (int)
	 * %f : nombre flottant (float), %.2f pour 2 chiffres après la virgule
	 * %c : caractère (char)
	 * %s : chaine de caractères (texte)
	*/

	printf("Le nombre est %d ou %.2f.\n", nombre, autrenombre);

	int age = 0;
	/*
	 * age  : contenu de la variable
	 * $age : adresse où est stockée la variable
	 */

	printf("Quel âge avez-vous ? ");
	scanf("%d", &age);
	printf("Vous avez %d ans.\n", age);

	signed char lettre = 'A';

	printf("Entrez une lettre : ");
	scanf("%c", &lettre);
	printf("Lettre choisie : %c\n", lettre);


	return (0);
}
