#include <stdio.h>
#include "main.h"
/**
* main - Entry point
*Return: Always 0 (success)
*_putchar Function to print character on stdout
*/

void print_alphabet(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
_putchar('\n');
}
}
