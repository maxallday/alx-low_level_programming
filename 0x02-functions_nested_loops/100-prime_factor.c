#include <stdio.h>
#include <math.h>

/* Program that prints the largest prime factor of a number*/
int main(void)
{
    
    long int num = 612852475143;
    /* Declare and initialize the largest prime factor*/
    long int max_prime = -1;
    /* Loop while the number is even and divide it by 2*/
    while (num % 2 == 0)
    {
        max_prime = 2;
        num /= 2;
    }
    
    for (long int i = 3; i <= sqrt(num); i += 2)
    {
        
        while (num % i == 0)
        {
            max_prime = i;
            num /= i;
        }
    }
   
    if (num > 2)
    {
        max_prime = num;
    }
    
    printf("%ld\n", max_prime);
    return (0);
}

