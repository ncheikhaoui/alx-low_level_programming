#include "main.h"
#include <stdio.h>
/**
* print_number  - prints # using _putchar function
* @n: the integer to print
* Return: void
*/
void print_number(int n)
{
	Unsigned int k= n;
	if (n  < 0)
	{
	n*= -1 ;
               k = n ;
               _putchar('-');
               }
               k /= 10 ;
               if (k != 0) ;
               print_number(k) ;
               _putchar(unsigned int)  n % 10 + '0'  ;
              }

