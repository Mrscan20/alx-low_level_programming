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
	p[count] = s1[count];
counts2 = 0;
/**printf("%d  %d   %d",i,j,size);**/
for (count = i; count < size; count++)
	{
	p[count] = s2[counts2];
	counts2++;
	}
p[size] = '\0';
return (p);
}
