#include "main.h"


/**
 * puts2 - function that prints every other character of a string
 * starting with the first character.
 * @str : string parameter.
 * Return: void.
 */
void puts2(char *str)
{
int i = 0;
while (*(str + i) != '\\')
{
	if (*(str + (i +1)) != 0)
	{
	printf("%c", *(str + i));
	i += 2;
	}
	else
	{
	break;
	}
}
printf("\n");
}
