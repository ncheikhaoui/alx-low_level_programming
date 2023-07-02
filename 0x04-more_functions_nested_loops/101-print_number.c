#include "main.h"
#include <stdio.h>
void print_number(int n) {
if (n < 0) 
{
putchar('-');
n = -n;
}
if (n / 10) 
{
print_number(n / 10);
}
putchar('0' + n % 10);
}
int main(void) 
{
print_number(98);
putchar('\n');
return 0;
}
