#include <stdio.h>
#include "main.h"
/*swap int  Prototype: void swap_int(int *a, int *b);*/
void swap_int(int *a, int *b)
{
    /* Use a temporary variable to store the value of *a*/
    int temp = *a;
    /* Assign the value of *b to *a*/
    *a = *b;
    /* Assign the value of temp to *b*/
    *b = temp;
}

int main()
{
    /* Declare and initialize two variables*/
    int x = 10;
    int y = 20;
    /* Print their values before swapping*/
    printf("Before swapping: x = %d, y = %d\n", x, y);
    /* Call the swap_int function with the addresses of x and y*/
    swap_int(&x, &y);
    /* Print their values after swapping*/
    printf("After swapping: x = %d, y = %d\n", x, y);
    return 0;
}

