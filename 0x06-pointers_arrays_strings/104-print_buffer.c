#include <stdio.h>

/* A function to print a buffer*/
void print_buffer(char *b, int size)
{
    /* Loop over the buffer bytes*/
    for (int i = 0; i < size; i++)
    {
        /* Print the byte as a hexadecimal number*/
        printf("%02x ", b[i]);

        /* Print a newline after every 10 bytes*/
        if ((i + 1) % 10 == 0)
        {
            printf("\n");
        }
    }

    /* Print a final newline*/
    printf("\n");
}

/* A function to test the print_buffer function*/
void test(char *b, int size)
{
  
    printf("Buffer size: %d\n", size);
    printf("Buffer content:\n");
    print_buffer(b, size);
}


int main()
{
  
    char b1[] = "Hello, world!";
    test(b1, sizeof(b1));

    char b2[] = {0x41, 0x42, 0x43, 0x44, 0x45};
    test(b2, sizeof(b2));

    return 0;
}

