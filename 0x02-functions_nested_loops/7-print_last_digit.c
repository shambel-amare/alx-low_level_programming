#include <stdio.h>
#include "main.h"
/**
*print last digit of an integer
* main - check the code
*Return: Always 0 (success)
*_putchar Function to print character on stdout
*/
char _putchar(char c)
{
return (write(1, &c, 1));
}
/*print the last digit of a number*/
int print_last_digit(int n)
{
int lD;
if (n < 0)
{
n = _abs(n);
}
lD = n % 10;
_putchar(lD + '0');
return(lD);
}
/*main function*/
int main(void)
{
int r;

print_last_digit(98);
print_last_digit(0);
r = print_last_digit(-1024);
_putchar('0' + r);
_putchar('\n');
return (0);
}
/*Function that computes the absolute value of an integer*/
int _abs(int x)
{
if (x > 0)
{
return (x);
}
else if (x < 0)
{
return (-x);
}
else if (x == 0)
{
return (0);
}
}