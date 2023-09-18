/*function that draws a straight line in the terminal using C language. */
#include <stdio.h>

int _putchar(char c);
void print_line(int n)
{
    
    if (n > 0)
    {
    	 
        for (int i = 0; i < n; i++)
        {
            _putchar('_');
        }
    }
    

    _putchar('\n');
}

