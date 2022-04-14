#include <stdio.h>
/**
* main - Entry point
*Return: Always 0 (success)
*/
int main(void)
{
int c, j, k, l;
for (c = 0; c < 10; c++)
{
for (i = 0; i < 10; i++)
{
for (k = 0; k < 10; k++)
{
for (j = 0; j < 10; j++)
{
if (((k + j) > (c + i) &&  k >= c) || c < k)
{
putchar(c + '0');
putchar(i + '0');
putchar(' ');
putchar(k+ '0');
putchar(j + '0');
}
else if (c + i + k + j == 227 && c == 57)
{
break;
}
else
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
