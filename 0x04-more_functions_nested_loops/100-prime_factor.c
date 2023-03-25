#include <stdio.h>

/**
 * main - the largest prime
 * Return: Always 0.
 */
int main(void)
{
	long prime = 612852475143, i;

	while (i < (prime / 2))
	{
		if ((prime % 2) == 0)
		{
			prime /= 2;
			continue;
		}

		for (i = 3; i < (prime / 2); i += 2)
		{
			if ((prime % i) == 0)
				prime /= i;
		}
	}

	printf("%ld\n", prime);

	return (0);
}

