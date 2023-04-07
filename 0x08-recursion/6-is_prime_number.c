#include "main.h"

/**
 * _primef - if an input number is a prime number.
 * @a: input.
 * @b: iterator.
 * Return: 1 or 0.
 */
int _primef(int a, int b)
{
	if (a % b == 0)
	{
		if (a == b)
			return (1);
		else
			return (0);
	}
	return (_primef(a, (b + 1)));
}
/**
 * is_prime_number - return if an input number is a prime number.
 * @n: input.
 * Return: 1 or 0.
 */
int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (_primef(n, 2));
}
