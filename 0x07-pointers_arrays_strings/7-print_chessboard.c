#include <stdio.h>
#include "main.h"
/*
Write a function that prints the chessboard.

Prototype: void print_chessboard(char (*a)[8]);
*/
char board[8][8] = {
    {'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
    {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
    {'.', '.', '.', '.', '.', '.', '.', '.'},
    {'.', '.', '.', '.', '.', '.', '.', '.'},
    {'.', '.', '.', '.', '.', '.', '.', '.'},
    {'.', '.', '.', '.', '.', '.', '.', '.'},
    {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
    {'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'}
};

void print_chessboard(char (*a)[8])
{
    int i, j; /* declare variables to loop through the array*/
    for (i = 0; i < 8; i++) /* loop through the rows of the array*/
    {
        for (j = 0; j < 8; j++) /* loop through the columns of the array*/
        {
            putchar(a[i][j]); /* print the character at the current position*/
        }
        putchar('\n'); /* print a new line after each row*/
    }
}

