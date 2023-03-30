#include "main.h"

/**
 *rev_string - function that reverse a string
 *@s: pointeur s as a parameter.
 *
 *Return:void.
 */
void rev_string(char *s)
{
int item = 0, i, j;
char *str, temp;
while (item >= 0)
{
	if (s[item] == '\0')
	break;
	item++;
}
str = s;
for (i = 0; i < (item - 1); i++)
{
	for (j = i + 1; j > 0; j--)
	{
	temp = *(str + j);
	*(str + j) = *(str + (j - 1));
	*(str + (j - 1)) = temp;
	}
}
}


