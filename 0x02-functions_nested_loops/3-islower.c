#include <stdio.h>
#include "main.h"
/**
* _islower -function to print 1 for lowercase and 0 otherwise
*Return: Always 0 (success)
*int k is integer input
*/
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
