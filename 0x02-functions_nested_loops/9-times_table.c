#include <stdio.h>

void times_table(void)
{
    int i;
    int j;
    int product;

    i = 0;
    while (i <= 9)
    {
        j = 0;
        while (j <= 9)
        {
            product = i * j;
            if (j == 0)
            {
                printf("%d", product);
            }
            else
            {
                printf(", %s%d", (product < 10) ? " " : "", product);
            }
            j++;
        }
        printf("\n");
        i++;
    }
}

