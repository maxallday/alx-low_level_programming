#include <stdio.h>
#include "main.h"
/*
Write a function that prints the sum of the two diagonals of a square matrix of integers.

Prototype: void print_diagsums(int *a, int size);
Format: see example
You are allowed to use the standard library
*/

#include <stdio.h>

void print_diagsums(int *a, int size)
{
    int i, j, sum1, sum2;
    sum1 = 0;
    sum2 = 0;
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            if (i == j) /* main diagonal */
            {
                sum1 += a[i * size + j];
            }
            if (i + j == size - 1) /* secondary diagonal */
            {
                sum2 += a[i * size + j];
            }
        }
    }
    printf("%d, %d\n", sum1, sum2);
}

