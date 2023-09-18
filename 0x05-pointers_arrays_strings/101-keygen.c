/*Create a program that generates random valid passwords for the program 101-crackme.

You are allowed to use the standard library
You don’t have to pass the betty-style tests (you still need to pass the betty-doc tests)
man srand, rand, time
gdb and objdump can help
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 6

int main(void)
{
    /* Declare an array of possible values for each character of the password*/
    char values[PASSWORD_LENGTH][4] = {
       {'|', '\0', '\0', '\0'}, // rdi * 0x2a + 0x30 == 0x149c
        {'o', '\0', '\0', '\0'}, // rsi * 0x2a + 0x30 == 0x14a8
        {'K', '\0', '\0', '\0'}, // rdx * 0x2a + 0x30 == 0x14b4
        {'o', '\0', '\0', '\0'}, // rcx * 0x2a + 0x30 == 0x14a8
        {'o', '\0', '\0', '\0'}, // r8 * 0x2a + 0x30 == 0x14a8
        {'l', '\n', '\r', '\t'} // r9 * 0x2a + 0x30 == 0x14c6
    };

    /* Declare a char array to store the password*/
    char password[PASSWORD_LENGTH + 1];

    /* Seed the random number generator with the current time*/
    srand(time(NULL));

    /* Generate a random valid password by choosing one value for each character*/
    for (int i = 0; i < PASSWORD_LENGTH; i++)
    {
        /* Choose a random index from the values array*/
        int index = rand() % sizeof(values[i]);

        /*Assign the value at that index to the password array*/
        password[i] = values[i][index];
    }

    /* Add a null terminator at the end of the password array*/
    password[PASSWORD_LENGTH] = '\0';

    /* Print the password to the standard output*/
    printf("Random valid password: %s\n", password);

    return EXIT_SUCCESS;
}

