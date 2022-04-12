#include <stdio.h>
#include "main.h"
/**
* main - Entry point
*Return: Always 0 (success)
*_putchar Function to print character on stdout
*/
char _putchar(char c)
{
return (write(1, &c, 1));
}
/* Function to print alphabets*/
void print_alphabet(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
}
/*main function*/
int main(void)
{
print_alphabet();
_putchar('\n');
return (0);
}
