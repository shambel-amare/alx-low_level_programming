#include <stdio.h>
#include "main.h"
/**
* _abs -function return absolute value of integer
*Return: Always 0 (success)
*/
/*int x Function that computes the absolute value of an integer*/
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
