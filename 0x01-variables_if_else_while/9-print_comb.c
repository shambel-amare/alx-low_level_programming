#include <stdio.h>
/**
* main - Entry point
*Return: Always 0 (success)
*/
int main(void)
{
int c;
for (c = 0; c < 10; c++)
{
putchar(c + '0');
if (c == 9)
{
putchar('\n');
}
else
{
putchar(',');
putchar(' ');
}
}
return (0);
}
