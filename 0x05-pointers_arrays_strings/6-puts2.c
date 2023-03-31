#include "main.h"


/**
 * puts2 - function that prints every other character of a string
 * starting with the first character.
 * @str : string parameter.
 * Return: void.
 */
void puts2(char *str)
{
int i;
for (i = 0; *(str + i) != '\0'; i++)
	{
	printf("%c", *(str + i));
	i++;
	}
printf("\n");
}
