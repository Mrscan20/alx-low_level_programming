#include "main.h"

/**
 * _strcpy - function that copies the string.
 * @src : source string.
 * @dest : destination string.
 * Return: destination string.
 */
char *_strcpy(char *dest, char *src)
{
int i;
for (i = 0; *(src + i) != '\0'; i++)
	*(dest + i) = *(src + i);
return (dest);
}
