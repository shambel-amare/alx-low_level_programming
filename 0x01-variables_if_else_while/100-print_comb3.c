#include <stdio.h>
/**
* main - Entry point
*Return: Always 0 (success)
*/
int main(void)
{
int c, k;
for (c = 0; c < 10; c++)
{
for (k = 1; k < 10; k++)
{
if (k == c)
{
continue;
}
if (k < c)
{
continue;
}
putchar(c + '0');
putchar(k + '0');
if (c == 8 && k == 9)
{
putchar('\n');
break;
}
putchar(',');
putchar(' ');
}
}
return (0);
}
