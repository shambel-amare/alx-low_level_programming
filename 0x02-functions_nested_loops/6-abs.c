#include <stdio.h>
#include "main.h"
/**
* _abs -function return absolute value of integer
*Return: Always 0 (success)
* @x: is integer input
*/
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
else
{
return (0);
}
}
