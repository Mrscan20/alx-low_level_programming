#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings.
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to a sring or NULL.
 */
char *str_concat(char *s1, char *s2)
{
char *p;
unsigned int i, j, count, counts2;
unsigned int size;

for (i = 0; *(s1 + i) != '\0'; i++)
	;
for (j = 0; *(s2 + j) != '\0'; j++)
	;
size = i + j + 1;
p = malloc(sizeof(char) * size);
if (p == NULL)
	return (NULL);
for (count = 0; count < i; count++)
	if (*s1 == '\0')
	{
		s1 = "";
		break;
	}
	else
		p[count] = s1[count];
counts2 = 0;
for (count = i; count < size; count++)
	if (*s2 == '\0')
	{
		s2 = "";
		break;
	}
	else
	{
		p[count] = s2[counts2];
		counts2++;
	}
p[size] = '\0';
return (p);
}
