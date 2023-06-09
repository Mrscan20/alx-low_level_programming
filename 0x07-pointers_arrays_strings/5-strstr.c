#include "main.h"

/**
 * _strstr -  function that locates a substring.
 * @haystack: source string.
 * @needle: substring to locate.
 *
 * Return: pointer to location or Null
 */
char *_strstr(char *haystack, char *needle)
{
int i;
int len = 0;

while (*(needle + len) != '\0')
	len++;
for (i = 0; *(haystack + i) != '\0'; i++)
{
	int n1 = i;

	if (*(needle + 0) == *(haystack + n1))
	{
		return (haystack + i);
	}
}
return ('\0');
}
