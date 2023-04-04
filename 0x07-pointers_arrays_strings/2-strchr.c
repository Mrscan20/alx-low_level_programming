#include "main.h"

/**
 * _strchr - function that locates a character in a string.
 * @s: string.
 * @c: character to locate.
 *
 * Return: character.
 */
char *_strchr(char *s, char c)
{
int i = 0;
while (*(s + i) != c)
	i++;
return (s + i);
}
