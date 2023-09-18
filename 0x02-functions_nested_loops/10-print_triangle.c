#include <stdio.h>

/* Prototype of _putchar function*/
int _putchar(char c);

/* Function that prints a triangle of size x size*/
void print_triangle(int size)
{
   
    if (size > 0)
    {
        /* For each iteration, print size - i spaces and i hashes*/
        for (int i = 1; i <= size; i++)
        {
            
            for (int j = 0; j < size - i; j++)
            {
                _putchar(' ');
            }
            /* Print i hashes*/
            for (int k = 0; k < i; k++)
            {
                _putchar('#');
            }
           
            _putchar('\n');
        }
    }
    else
    {
        
        _putchar('\n');
    }
}

