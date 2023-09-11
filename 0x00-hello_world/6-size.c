#include <stdio.h>

int main(void)
{
  printf("Size of Int Data Types in C = %zu bytes \n", sizeof(short int));
  printf("Size of Long Int Data Types in C = %zu bytes \n", sizeof(long int));
  printf("Size of Float Data Types in C = %zu bytes \n", sizeof(float));
  printf("Size of Double Data Types in C = %zu bytes \n", sizeof(double));
  printf("Size of Long Double Data Types in C = %zu bytes \n", sizeof(long double));
  printf("Size of Char Data Types in C = %zu byte \n", sizeof(char));
  return (0);
}

