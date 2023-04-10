#include "main.h"
#include <stdio.h>

/**
 * main - Entry point.
 * @argc:nuber of argument passed into the command line.
 * @argv: argument vector or pointer to an array.
 * Return:always 0.
 */
int main(int argc, char *argv[])
{
argv[0] = "nargs";

printf("%d\n", argc - 1);
return (0);
}
