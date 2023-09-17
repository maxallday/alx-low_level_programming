#include <stdio.h>
/*Write a program that prints all possible different combinations of three digits.

Numbers must be separated by ,, followed by a space
The three digits must be different
012, 120, 102, 021, 201, 210 are considered the same combination of the three digits 0, 1 and 2
Print only the smallest combination of three digits
*/
int main(void)
{
    int i, j, k;

    for (i = 0; i < 10; i++)
    {
        for (j = i + 1; j < 10; j++)
        {
            for (k = j + 1; k < 10; k++)
            {
                printf("%d%d%d", i, j, k);
                if (i < 7)
                {
                    printf(", ");
                }
            }
        }
    }
    printf("\n");
    return (0);
}

