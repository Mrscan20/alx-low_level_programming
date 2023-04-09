#include "main.h"

/**
 * _strlen - function that returns the length of a string.
 *
 * @s : parameter
 * Return: Always integer that represent length of a string (Success).
 */
int _strlen(char *s)
{
int i = 0;
while (s[i] != '\0')
	i++;

return (i);
}
