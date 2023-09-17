#include <stdio.h>
/*Write a program that prints all possible different combinations of two digits.

Numbers must be separated by ,, followed by a space
The two digits must be different
01 and 10 are considered the same combination of the two digits 0 and 1
Print only the smallest combination of two digits
Numbers should be printed in ascending order, with two digits
*/
int main(void)
{
    int i, j;
    i = 0;
    while (i <= 9)
    {
        j = i + 1;
        while (j <= 9)
        {
            putchar(i + '0');
            putchar(j + '0');
            if (i < 8 || j < 9)
            {
                putchar(',');
                putchar(' ');
            }
            j++;
        }
        i++;
    }
    putchar('\n');
    return (0);
}

