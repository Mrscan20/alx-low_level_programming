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
int i;
int res= 0;
if (argc == 1)
	{
		printf("0\n");
	return (0);
	}
else
	{
	for (i = 0; i < argc; i++)
	{	
			if (*argv[i] >= 0 && ! isdigit(*argv[i]))
			res = res + atoi(argv[i]);
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", res);
	return (0);
	}
}
