#include <stdio.h>

int main(void)
{
    /* initialize the first two Fibonacci numbers */
    int a = 1;
    int b = 2;

    /* initialize the sum of even-valued terms */
    int sum = 0;

    /* loop until the current Fibonacci number exceeds 4,000,000 */
    while (a <= 4000000)
    {
        /* if the current Fibonacci number is even */
        if (a % 2 == 0)
        {
            /* add it to the sum */
            sum += a;
        }

        /* update the next two Fibonacci numbers */
        int temp = a;
        a = b;
        b = temp + b;
    }

    /* print the sum followed by a new line */
    printf("%d\n", sum);

    return (0);
}

