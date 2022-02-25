#include <stdio.h>
/**
 * main - fonction
 * @argc: param
 * @argv: param
 * Return: rien
 */
int main(int argc, char *argv[])
{
	int i = 0;

	for(; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
