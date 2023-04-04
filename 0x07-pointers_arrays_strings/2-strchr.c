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
while (*(s + i) != '\0')
	if (*(s + i) != c)
		i++;
	else if (*(s + i) == c)
		break;
	else
		s = NULL;
return (s + i);
}
