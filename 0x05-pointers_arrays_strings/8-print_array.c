#include "main.h"
#include <stdio.h>

/**
 * print_array - function that print n element of an array
 * @a : pointer to an array
 * @n : number of element
 * return :void
 */
void print_array(int *a, int n)
{
int i = 0;
for (i = 0; i < n ; i++)
	{
	printf("%d", a[i]);
	printf(", ");
	}
printf("\n");
}
