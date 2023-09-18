/*Write a function that prints n elements of an array of integers, followed by a new line.

Prototype: void print_array(int *a, int n);
where n is the number of elements of the array to be printed*/
#include <stdio.h>

/*Prototype: void print_array(int *a, int n);*/
void print_array(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d", a[i]);
        if (i < n - 1)
        {
            printf(", ");
        }
    }
    printf("\n");
}

int main()
{
    /*Declare and initialize an array of integers*/
    int arr[] = {10, 20, 30, 40, 50};
    /*Print 3 elements of the array using the print_array function*/
    print_array(arr, 3);
    return 0;
}

