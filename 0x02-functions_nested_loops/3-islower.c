#include <stdio.h>
#include "main.h"
/**
* main - check the code
*Return: Always 0 (success)
*_putchar Function to print character on stdout
*/
char _putchar(char c)
{
return (write(1, &c, 1));
}
/*function to print 1 for lowercase and 0 otherwise*/

int _islower(int k)
{
char i;
char c;

if ((k >= 'a' && k <= 'z') || (k >= 'A' && k <= 'Z'))
{
c = k;
}
else
{
c = k + '0';
}
if (c >= 'a')
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

r = _islower('H');
_putchar(r + '0');
r = _islower('o');
_putchar(r + '0');
r = _islower(108);
_putchar(r + '0');
_putchar('\n');
return (0);
}
