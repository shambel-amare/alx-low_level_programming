#include <stdio.h>
#include "main.h"
/**
*_isaplha checks for alphabetic character.
* main - check the code
*Return: Always 0 (success)
*_putchar Function to print character on stdout
*/
char _putchar(char c)
{
return (write(1, &c, 1));
}
/*_isalpha checks for alphabettic character*/
int _isalpha(int c)
{
char i;

if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}
/*main function*/
int main(void)
{
int r;

r = _isalpha('H');
_putchar(r + '0');
r = _isalpha('o');
_putchar(r + '0');
r = _isalpha(108);
_putchar(r + '0');
r = _isalpha(';');
_putchar(r + '0');
_putchar('\n');
return (0);
}