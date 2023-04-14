#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: n bytes of s2.
 *
 * Return: pointer to a sring or NULL.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *p;
unsigned int i, j, size, count, counts2;

if (s1 == NULL)
	{s1 = ""; }
if (s2 == NULL)
	{s2 = ""; }
for (i = 0; *(s1 + i) != '\0'; i++)
	;
for (j = 0; *(s2 + j) != '\0'; j++)
	;
size = i + j + 1;
p = malloc(sizeof(char) * size);
if (p == NULL)
	{
	free(p);
	return (NULL);
	}
for (count = 0; count < i; count++)
	p[count] = s1[count];
counts2 = 0;
if (n >= j)
	{
	for (count = i; count < size; count++)
	{
	p[count] = s2[counts2];
	counts2++;
	}
	}
else
	{
	for (count = i; counts2 < n; count++)
	{
	p[count] = s2[counts2];
	counts2++;
	}
	}
return (p);
}
