#include <stdio.h>
/**
 * main - fonction
 * @argc: param
 * @argv: param
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i = 0;
	
	for(; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
