#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/*The string Last digit of, followed by
n, followed by
the string is, followed by
if the last digit of n is greater than 5: the string and is greater than 5
if the last digit of n is 0: the string and is 0
if the last digit of n is less than 6 and not 0: the string and is less than 6 and not 0
followed by a new line */
/* betty style doc for function main goes there */
int main(void)
{      
       

	int n;
       int last_digit; 
	srand(time(0));

	n = rand() - RAND_MAX / 2;
         last_digit = n % 10;
       
          printf("Last digit of %d is ", n);
    
    if (last_digit > 5) {
        printf("and is greater than 5\n");
    } else if (last_digit == 0) {
        printf("and is 0\n");
    } else {
        printf("and is less than 6 and not 0\n");
    } 

	/* your code goes there */
	return (0);
}
