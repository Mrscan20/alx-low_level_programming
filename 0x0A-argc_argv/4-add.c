#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point.
 * @argc: number of argument passed into it.
 * @argv: pointer to an array
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
int i, j, res = 0;

for (i = 1; i < argc; i++)
{
	for (j = 0; argv[i][j] != '\0'; j++)
	{
		if (!isdigit(argv[i][j]))
		{
			printf("Error\n");
			return (1);
		}
	}
	res = res + atoi(argv[i]);
}
printf("%d\n", res);
return (0);
}
