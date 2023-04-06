#include "main.h"
#include <stdlib.h>

/**
 * _puts_recursion - function that prints a string usig recursion.
 * @s: string input.
 *
 * Return: nothing.
 */
void _puts_recursion(char *s)
{
unsigned int i = 0;

if (*(s + i) == '\0')
	{
	_putchar('\n');
	return;
	}
_putchar(*(s + i));
i++;
_puts_recursion((s + i));
}
