#include <stdio.h>
#include "main.h"
/**
* print_last_digit -prints the last digit of an integer
*Return: lD (success)
* @n: is integer input
*/

int print_last_digit(int n)
{
int lD;

lD = n % 10;
_putchar(lD + '0');
return (lD);
}
