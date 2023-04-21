#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point.
 * @argc: number of argument passed into it.
 * @argv: pointer to an array
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
float res= 0;
int coin[] = {25,10,5,2,1};
int i;

if (argc == 1)
	{
	printf("Error\n");
	return (1);
	}
if (*argv[1] < 0)
	printf("0\n");
for (i = 0; i < 5; i++)
	{
	res = atoi(argv[1]) / coin[i];
	if (res > 0 && res / 10 > 0)
		{
		printf("%d\n", (int) res + 1);
		break;
		}
	else
		{
		printf("%d\n", (int) res);
		break;
		}
	}
return (0);
}
