#include "main.h"

/**
 * print_most_numbers - function that print numbers except 2 and 4.
 * @ : void.
 *
 * Return: void.
 */
void print_most_numbers(void)
{
int i;
for (i = 0; i <= 9; i++)
{
if (i == 0 || i == 4)
	i++;
else
	_putchar(i + '0');
}
_putchar('\n');
}
