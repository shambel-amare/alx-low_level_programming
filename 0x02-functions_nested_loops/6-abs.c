#include <stdio.h>
#include "main.h"
/**
*-abs function return absolute value of integer
* main - check the code
* _abs function resides in main.h
*Return: Always 0 (success)
*/
int main(void)
{
int r;

r = _abs(-1);
printf("%d\n", r);
r = _abs(0);
printf("%d\n", r);
r = _abs(1);
printf("%d\n", r);
r = _abs(-98);
printf("%d\n", r);
return (0);
}
