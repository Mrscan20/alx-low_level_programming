#include "main.h"

/**
 *_powf - square root of a number.
 * @a: input
 * @b: iterator
 * Return: square root..
 */
int _powf(int a, int b)
{
	if (b % (a / b) == 0)
	{
		if (b * (a / b) == a)
			return (b);
		else
			return (-1);
	}
	return (_powf(a, (b + 1)));
}
/**
 * _sqrt_recursion - natural square root of a number.
 * @n: input
 * Return: natural square root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (_powf(n, 2));
}
