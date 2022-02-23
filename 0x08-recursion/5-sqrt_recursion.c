#include "main.h"
/**
 * _sqrt - fonction
 * @n: param
 * @x: param
 * Return: int
 */
int _sqrt(int n, int x)
{
	if (x * x == n)
		return (x);
	if (x * x > n)
		return (-1);
	return (_sqrt(n, x + 1));
}

/**
 * _sqrt_recursion - fonction
 * @n: param
 * Return: int
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (_sqrt(n, 1));
}
