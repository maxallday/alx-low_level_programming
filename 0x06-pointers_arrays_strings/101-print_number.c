#include <stdio.h>
#include"main.h"
/* A function that prints an integer using _putchar function*/
void print_number(int n)
{
    /* If the number is negative*/
    if (n < 0)
    {
       /* Print a minus sign*/
        _putchar('-');
        /* Make the number positive*/
        n = -n;
    }
    /* If the number has more than one digit*/
    if (n / 10)
    {
        /*Recursively print the leftmost digits*/
        print_number(n / 10);
    }
    /* Print the rightmost digit as a character*/
    _putchar(n % 10 + '0');
}

int main()
{
    /* An example number*/
    int n = -1234;
    /* Print the number using the function*/
    print_number(n);
    /* Print a new line*/
    _putchar('\n');
    return 0;
}

