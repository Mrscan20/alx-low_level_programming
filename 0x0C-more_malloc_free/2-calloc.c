#include "main.h"
#include <stdlib.h>

/**
 * _calloc -  function that allocates memory using malloc.
 * @nmemb: element of array
 * @size: size byte.
 *
 * Return: pointer or NULL.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		ptr[i] = 0;

	return (ptr);
}
