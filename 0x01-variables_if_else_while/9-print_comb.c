#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = '0';

	for (a = '0'; a <= '9'; a++)
	{
	putchar(a);
		if (a <= '8')
		{putchar(','); }
	putchar(' ');
	}
	putchar('\n');
	return (0);

}

