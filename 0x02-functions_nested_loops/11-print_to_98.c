#include <stdio.h>
#include "main.h"
void print_to_98(int n)
{
    /* loop from n to 98 */
    while (n <= 98)
    {
        /* print the current number */
        printf("%d", n);

        /* if not the last number, print a comma and a space */
        if (n != 98)
        {
            printf(", ");
        }

        /* increment n by one */
        n++;
    }

    /* print a new line */
    printf("\n");
}

