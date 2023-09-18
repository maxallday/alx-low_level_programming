#include <stdio.h>
#include "main.h"
void print_times_table(int n)
{
    /* declare a variable to store the product */
    int product;

    /* loop from 0 to 12 */
    for (int i = 0; i <= 12; i++)
    {
        /* calculate the product of n and i */
        product = n * i;

        /* print the product in the format n x i = product */
        printf("%d x %d = %d\n", n, i, product);
    }
}

