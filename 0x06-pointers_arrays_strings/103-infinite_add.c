#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include"main.h"
void reverse(char *str)
{
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++)
    {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}


char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
    int len1 = strlen(n1);
    int len2 = strlen(n2);
    int carry = 0; 
    int i = len1;
    int j = len2 - 1; 
    int k = 0; 

    /* Loop until both n1 and n2 are exhausted or r is full*/
    while ((i >= 0 || j >= 0) && k < size_r - 1)
    {
        /* Get the digits from n1 and n2, or 0 if none*/
        int d1 = (i >= 0) ? n1[i] - '0' : 0;
        int d2 = (j >= 0) ? n2[j] - '0' : 0;

        /* Add the digits and the carry*/
        int sum = d1 + d2 + carry;

        /* Update the carry and the result digit*/
        carry = sum / 10;
        r[k] = (sum % 10) + '0';

        /* Move to the next positions*/
        i--;
        j--;
        k++;
    }

    /* If the carry is non-zero and r is not full, append it to r*/
    if (carry > 0 && k < size_r - 1)
    {
        r[k] = carry + '0';
        k++;
    }

    /* If r is full, return 0*/
    if (k == size_r - 1)
    {
        return 0;
    }

    /* Terminate r with a null character*/
    r[k] = '\0';

    /* Reverse r to get the correct order of digits*/
    reverse(r);

    /* Return a pointer to r*/
    return r;
}

/* A function to test the infinite_add function*/
void test(char *n1, char *n2, int size_r)
{
    char *r = malloc(size_r); /* Allocate memory for r*/
    char *result = infinite_add(n1, n2, r, size_r); /*Call the infinite_add function*/

    /* Print the result or an error message*/
    if (result == 0)
    {
        printf("Error: Result cannot be stored in r\n");
    }
    else
    {
        printf("%s + %s = %s\n", n1, n2, result);
    }

    free(r); /* Free the memory allocated for r*/
}
int main()
{
    
    test("123", "456", 10);
    test("999", "1", 4);
    test("12345678901234567890", "98765432109876543210", 40);

    return 0;
}

