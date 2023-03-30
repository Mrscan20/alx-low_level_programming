#include "main.h"

/**
 *rev_string - function that reverse a string
 *@s: pointeur s as a parameter.
 *
 *Return:void.
 */
void rev_string(char *s)
{
int i;
char tmp[10];
int j = 0;

for (i = 8; i >= 0; i--)
	{
	*(tmp + j) = *(s + i);
	j++;
	}
tmp[i] = '\0';
for (j = 0; j < 10; j++)
	*(s + j) = tmp[j];
}

