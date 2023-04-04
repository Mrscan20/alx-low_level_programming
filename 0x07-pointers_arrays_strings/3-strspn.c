#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: initial segment.
 * @accept: substring.
 *
 * Return: unsigned entier.
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int i, j;
int n = 0;
for (i = 0; *(s + i) != '\0'; i++)
{
for (j = 0; j < i; j++)
	if (*(accept + j) == *(s + i))
	n++;
}
return (n);
}
