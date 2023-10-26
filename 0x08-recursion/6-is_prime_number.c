#include "main.h"
#include <stdio.h>

/**
 * check_prime - Check if a number is prime
 * @n: the number to be checked
 * @i: the iteratin times
 *
 * Return: 1 for prime or 0 for composite
 */
int check_prime(int n, int i);

/**
 * is_prime_number - Returns if a number is prime
 * @n: th eumber to be checked
 *
 * Return: integer value
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (check_prime(n, 2));
}

/**
 * check_prime - Check if a number is prime
 * @n: the number to be checked
 * @i: the iteration times
 *
 * Return: 1 for prime or 0 for composite
 */
int check_prime(int n, int i)
{
	if (i * i > n)
	{
		return (1);
	}

	if (n % i == 0)
	{
		return (0);
	}

	return (check_prime(n, i + 1));
}
