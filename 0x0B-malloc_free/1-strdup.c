#include "main.h"
#include <stdlib.h>

/**
 * _strdup -  function that returns a pointer
 * @str: string.
 *
 * Return: pointer to a character.
 */
char *_strdup(char *str)
{
char *p;
unsigned int i = 0;
unsigned int j;

if (str == NULL)
	return (NULL);
while (*(str + i) != '\0')
	i++;
p = malloc(sizeof(char) * (i + 1));
if (p == NULL)
	return (NULL);
for (j = 0; j <= i; j++)
	*(p + j) = *(str + j);
return (p);
}
