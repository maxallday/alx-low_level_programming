#include <stdio.h>
#include "main.h"
/* A function that reverses the content of an array of integers*/
void reverse_array(int *a, int n)
{
    /* A loop that iterates from 0 to n/2*/
    for (int i = 0; i < n/2; i++)
    {
        /* A temporary variable to store the element at index i*/
        int temp = a[i];
        /* Swap the element at index i with the element at index n-i-1*/
        a[i] = a[n-i-1];
        a[n-i-1] = temp;
    }
}

/* A function that prints an array of integers*/
void print_array(int *a, int n)
{
    /* A loop that iterates from 0 to n-1*/
    for (int i = 0; i < n; i++)
    {
        /* Print the element at index i followed by a space*/
        printf("%d ", a[i]);
    }
    /* Print a new line*/
    printf("\n");
}

int main()
{
    /* An example array of integers*/
    int arr[5] = {1, 2, 3, 4, 5};
    /*Print the original array*/
    printf("Original array: ");
    print_array(arr, 5);
    /* Reverse the array*/
    reverse_array(arr, 5);
    // Print the reversed array
    printf("Reversed array: ");
    print_array(arr, 5);
    return 0;
}

