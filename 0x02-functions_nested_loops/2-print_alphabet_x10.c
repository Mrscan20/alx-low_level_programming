#include "main.h"

/**
 * print_alphabet_x10 - print alphabet in lowercase 10 time.
 * alphabet set as a parameter type char
 * Return: void
 */
void print_alphabet_x10(void)
{	int i;
	for (i = 0; i <= 10; i++)
	{
	char alphabet = 'a';

	while (alphabet <= 'z')
		{
		_putchar(alphabet);
		alphabet++;
		}
	_putchar('\n');
	}
}
