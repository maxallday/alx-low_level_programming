#include <stdio.h>
#include "main.h"

/**Write a function that takes a pointer to an int as parameter and updates the value it points to to 98.
 * main - tests function that sets value of a pointer to 98
 * Return: nothing
 */
int main(void)
{
    int n;

    n = 402;
    printf("n=%d\n", n);
    reset_to_98(&n);
    printf("n=%d\n", n);
    return (0);
}

/**
 * reset_to_98 - updates the value of a pointer to 98
 * @n: pointer to an int
 * Return: nothing
 */
void reset_to_98(int *n)
{
    *n = 98;
}

