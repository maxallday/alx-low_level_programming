#include<stdio.h>
#include "main.h"
/*Write a function that concatenates two strings.

Prototype: char *_strcat(char *dest, char *src);
This function appends the src string to the dest string, overwriting the terminating null byte (\0) at the end of dest, and then adds a terminating null byte
Returns a pointer to the resulting string des
*/
char *_strcat(char *dest, char *src)
{
	int i  = 0, j = 0; /*declare varto iterate over the strings*/
	while (dest[i] !='\0')/*loop untill end */
	{ 

		i++;
	}
       while (src[j] !='\0')
       {
              dest[i] =  src[j];/*copy src[j] tp dest[i]*/
	      i++;
	       j++;
       }
    dest[i] = '\0';/*add the terminating null byte to dest*/
    return (dest);/*return pointer to dest*/
}
