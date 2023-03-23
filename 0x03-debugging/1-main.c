#include <stdio.h>

/**
* main - causes an infinite loop
* Return: 0
*/

int main(void)
{
        int i;

        printf("Infinite loop incoming :(\n");

        i = 0;

        while (i > 10)
        {
                putchar(i); /* this part of code causing the infinte loop for not increment i */
        }

        printf("Infinite loop avoided! \\o/\n");

        return (0);
}
