#include <stdio.h>
#include "main.h"
/*
Write a function that sets the value of a pointer to a char.

Prototype: void set_string(char **s, char *to);
*/

#include <stdio.h>

void set_string(char **s, char *to)
{
    *s = to; /* assign the address of to to the pointer s */
}

