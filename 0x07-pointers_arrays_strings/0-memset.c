#include "main.h"

/**
 * _memset - function that fills memory with a constant byte.
 * @s: pointer.
 * @b: constant to fill with.
 * @n: number of byte to fill.
 *
 * Return: character.
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i = 0;

while (i < n)
{ 
	s[i] = b;
	i++;
}

return (s);
}
