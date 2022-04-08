#include <stdio.h>
/**
* main - Entry point
*Return: Always 0 (success)
*/
int main(void)
{
int c, j, k;
for (c = 0; c < 10; c++)
{
for (j = 1; j < 10; j++)
{
for (k = 2; k <10; k++)
{
if (c == j || j == k || k == c)
{
continue;
}
if (k < j || j < c)
{
continue;
}
putchar(c + '0');
putchar(j + '0');
putchar(k + '0');
if (c == 7 && j == 8 && k == 9)
{
putchar('\n');
break;
}
putchar(',');
putchar(' ');
}
}
}
return (0);
}
