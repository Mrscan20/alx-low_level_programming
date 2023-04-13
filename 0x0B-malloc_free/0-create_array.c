#include "main.h"
#include <stdlib.h>
/**
 * create_array - function that creates an array of chars.
 * @size: size of array.
 * @c: specific character.
 *
 * Return: poiter to a character.
 */
char *create_array(unsigned int size, char c)
{
char *ar;
unsigned int i;

if (size == 0)
	return ('\0');
ar = malloc(sizeof(int) * size);
for (i = 0; i < size; i++)
	ar[i] = c;
if (sizeof(ar))
	return (ar);
else
	return (NULL);
}
