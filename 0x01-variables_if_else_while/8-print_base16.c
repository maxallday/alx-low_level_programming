#include <stdio.h>
/*Write a program that prints all the numbers of base 16 in lowercase, followed by a new line.
*/
int main(void)
{
    int n = 0;
    while (n < 16)
    {
        if (n < 10)
            putchar(n + '0');
        else
            putchar(n - 10 + 'a');
        n++;
    }
    putchar('\n');
    return (0);
}
