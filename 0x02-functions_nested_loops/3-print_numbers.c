/* Prototype: void print_numbers(void);
 Prints the numbers, from 0 to 9, followed by a new line
 You can only use _putchar twice in your code
 */
void print_numbers(void)
{
    /* Declare a variable to store the current number*/
    int num;

    /* Loop from 0 to 9*/
    for (num = 0; num <= 9; num++)
    {
        /* Use _putchar to print the current number as a character*/
        _putchar(num + '0');
    }

    
    _putchar('\n');
}

