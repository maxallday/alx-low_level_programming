/* Prototype: void more_numbers(void);
 Prints 10 times the numbers, from 0 to 14, followed by a new line
 You can only use _putchar three times in your code
 */
void more_numbers(void)
{
    /* Declare two variables to store the current iteration and the current number*/
    int iter, num;

    

    for (iter = 0; iter < 10; iter++)
    {
     
        for (num = 0; num <= 14; num++)
        {
            
            if (num >= 10)
            {
               
                _putchar(num / 10 + '0');
            }
            
            _putchar(num % 10 + '0');
        }

       
        _putchar('\n');
    }
}

