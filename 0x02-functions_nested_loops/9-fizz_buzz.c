#include <stdio.h>
#include "main.h"
/* Program that prints FizzBuzz*/
int main(void)
{
    /* Loop from 1 to 100*/
    for (int i = 1; i <= 100; i++)
    {
        /* If i is divisible by both 3 and 5, print FizzBuzz*/
        if (i % 3 == 0 && i % 5 == 0)
        {
            printf("FizzBuzz ");
        }
        /* Else if i is divisible by 3, print Fizz*/
        else if (i % 3 == 0)
        {
            printf("Fizz ");
        }
        /* Else if i is divisible by 5, print Buzz*/
        else if (i % 5 == 0)
        {
            printf("Buzz ");
     }
        else
        {
            printf("%d ", i);
        }
    }
    
    printf("\n");
    return (0);
}

