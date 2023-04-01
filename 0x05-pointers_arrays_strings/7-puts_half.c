#include "main.h"


/**
 * puts_half - function that prints half character of a string
 * @str : string parameter.
 * Return: void.
 */
void puts_half(char *str)
{
int i = 0;
int j = 0;
while (*(str + i) != '\0')
	{
	i++;
	}
if (i % 2 == 0)
	for (j = (i / 2); *(str + j) != '\0'; j++)
		printf("%c", *(str + j));
else
	for (j = (i / 2) + 1; *(str + j) != '\0'; j++)
		printf("%c", *(str + j));
printf("\n");
}
