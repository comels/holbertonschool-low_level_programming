#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - fonction
 * @a: param
 * @b: Param
 * Return: int
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - fonction
 * @a: param
 * @b: Param
 * Return: int
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - fonction
 * @a: param
 * @b: Param
 * Return: int
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - fonction
 * @a: param
 * @b: Param
 * Return: int
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - fonction
 * @a: param
 * @b: Param
 * Return: int
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
