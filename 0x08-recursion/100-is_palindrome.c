#include "main.h"

/**
 * _strlen_recursion - the length of a string.
 * @s: string
 * Return: integer(length).
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * _cmpf - compare character.
 * @s: string
 * @a: second parameter.
 * @b: third parameter..
 * Return: integer.
 */
int _cmpf(char *s, int a, int b)
{
	if (*(s + a) == *(s + b))
	{
		if (a == b || a == (b + 1))
			return (1);
		return (_cmpf(s, a + 1, b - 1));
	}
	return (0);
}

/**
 * is_palindrome - find if a string is a palindrome.
 * @s: string.
 * Return: 1 if it's true and 0 if it's false.
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (_cmpf(s, 0, _strlen_recursion(s) - 1));
}
