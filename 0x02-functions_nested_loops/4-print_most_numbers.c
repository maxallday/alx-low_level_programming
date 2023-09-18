/* This function prints the numbers, from 0 to 9, followed by a new line */
void print_numbers(void)
{
    /* Declare a variable to store the current number*/
    int num;

   
    for (num = 0; num <= 9; num++)
    {
        /* Use _putchar to print the current number as a character*/
        _putchar(num + '0');
    }

    /* Use _putchar to print a new line*/
    _putchar('\n');
}

