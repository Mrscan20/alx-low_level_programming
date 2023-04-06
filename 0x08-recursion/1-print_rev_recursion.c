#include "main.h"

/**
 * _print_rev_recursion - function that prints a string in reverse.
 * @s : input string.
 *
 * Return: nothing.
 */
void _print_rev_recursion(char *s)
{
int i = 0;
if (*(s + i) == '\0')
	return;
i++;
_print_rev_recursion(s + i);
_putchar(*(s + i));
}
