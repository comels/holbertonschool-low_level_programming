#include "main.h"
/**
 * prime - fonction
 * @n: param
 * @x: param
 * Return: int
 */
int prime(int n, int x)
{
	if (x > n / 2)
		return (1);
	if (n % x == 0)
		return (0);

	return (prime(n, x + 1));
}

/**
 * is_prime_number - fonction
 * @n: param
 * Return: int
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);

	return (prime(n, 2));
}
