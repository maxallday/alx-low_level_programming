#include <stdio.h>

/**
 * main - main block
 * Description: Print the first 50 fibonacci numbers, starting with 1 and 2.
 * Numbers must be coma and space separated.
 * Return: 0
 */

int main(void)
{
    int count = 3; /* this is so because the first 2 members have been given already. My loop will therefore begin from the 3rd one */

    long int first = 1, second = 2;
    long int next = first + second;

    printf("%lu, ", first);
    printf("%lu, ", second);

    while (count <= 50)
    {
        /* Let's check if we are at the end of the list, if we are close with a new line */
        if (count == 50)
        {
            printf("%lu \n", next);
         }
         else  /* if we are not at the end of the list, add a comma after the number */
         { 
           printf("%lu, ", next); 
         }

        /* Reset the variables to get the next number */
        first = second;
        second = next;

        /* after resetting the variables, you need to find the next number */
        next = first + second; 
        count++;
    }

    return (0);
}

