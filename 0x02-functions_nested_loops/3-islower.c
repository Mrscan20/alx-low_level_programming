#include "main.h"

/**
 * _islower - function that checks for lowercase character.
 *
 * Return: 0 if lowercase or 1 otherwise.
 *
 * @c -  set as a parameter type char
 */

int _islower(int c)
{
if (c >= 'A' && c <= 'Z')
	return (0);
else
	return (1);
}
