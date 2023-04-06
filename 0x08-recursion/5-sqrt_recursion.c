#include "main.h"

/**
 * _sqrt_recursion - function returns natural square root of a number.
 * @n: number.
 * Return: integer.
 */
int _sqrt_recursion(int n)
{
if (n < 0)
	return (-1);
if (n == 0)
	return (0);
if (n == 1)
	return (1);
if (n / 2 != 0 && n % 2 != 0)
	return (_sqrt_recursion());
}
