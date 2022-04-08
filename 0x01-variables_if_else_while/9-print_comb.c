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
if (c < 9)
{
putchar(c + '0');
putchar(',');
putchar(' ');
}
else
{
putchar(c + '0');
putchar('$');
}
}
putchar('\n');
return (0);
}
