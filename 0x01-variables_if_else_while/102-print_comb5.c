#include <stdio.h>

// A function to print a two-digit number with leading zero if needed
void print_two_digits(int n)
{
    if (n < 10)
    {
        putchar('0');
    }
    printf("%d", n);
}

int main(void)
{
    int i, j;

    // A loop to iterate over the first number from 0 to 99
    for (i = 0; i < 100; i++)
    {
        // A loop to iterate over the second number from i to 99
        for (j = i; j < 100; j++)
        {
            // Print the combination of two numbers separated by a space
            print_two_digits(i);
            putchar(' ');
            print_two_digits(j);
            // Print a comma and a space after each combination, except for the last one
            if (i < 98 || j < 99)
            {
                putchar(',');
                putchar(' ');
            }
        }
    }
    // Print a new line at the end
    putchar('\n');
    return (0);
}

