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
/* Function to print alphabets 10X*/
void print_alphabet_x10(void)
{
char c;
int i = 0;
while (i < 10)
{
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
i++;
}
}
/*main function*/
int main(void)
{
print_alphabet_x10();
return (0);
}
