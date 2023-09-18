#include <stdio.h>
#include "main.h"
// Prototype of _putchar function
int _putchar(char c);

// Function that prints an integer
void print_number(int n)
{
    // Declare and initialize a variable to store the sign of n
    int sign = 1;
    // Declare and initialize a variable to store the number of digits of n
    int digits = 0;
    // Declare and initialize a variable to store the power of 10 for each digit
    int power = 1;
    // If n is zero, print 0 and return
    if (n == 0)
    {
        _putchar('0');
        return;
    }
    // If n is negative, change the sign to -1 and print a minus sign
    if (n < 0)
    {
        sign = -1;
        _putchar('-');
    }
    // Loop while n is not zero
    while (n != 0)
    {
        // Increment the number of digits by 1
        digits++;
        // Multiply the power by 10
        power *= 10;
        // Divide n by 10
        n /= 10;
    }
    // Divide the power by 10 to get the highest power of 10 for n
    power /= 10;
    // Loop while the power is greater than zero
    while (power > 0)
    {
        // Print the digit at the current position by using the sign and the power
        _putchar('0' + sign * (n / power));
        // Remove the printed digit from n by using the modulo operator
        n %= power;
        // Divide the power by 10 to move to the next position
        power /= 10;
    }
}

