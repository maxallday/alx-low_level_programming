#include<stdio.h>
#include "main"
/*Write a function that copies a string.
Prototype: char *_strncpy(char *dest, char *src, int n);
Your function should work exactly like strncpy
*/
char *_strncpy(char *dest, char *src, int n)
{
	/*copy n byt from src t dest*/
	for (i=0, i<n,i++){

            dest[i] = src[i];


	}
/*If n is less than the length of src, add a null terminator to dest*/
	 if (n < strlen(src))
    {
        dest[n] = '\0';
    }

    /* Return the pointer to dest*/
    return dest;
}
