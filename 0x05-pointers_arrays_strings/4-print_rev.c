#include "main.h"

/**
 * print_rev - function that prints a string
 * in reverse, followed by a new line.
 * @s: pointeur s as a parameter.
 *
 * Return:void.
 */
void print_rev(char *s)
{
int i, j;

i = 0;
while (s[i] != '\0')
	{
	i = i;
	i++;
	}
for (j = i - 1 ; j >= 0; j--)
	printf("%c", s[j]);
printf("\n");
}
