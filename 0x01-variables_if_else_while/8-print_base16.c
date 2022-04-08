#include <stdio.h>
/**
* main - Entry point
*Return: Always 0 (success)
*/
int main(void)
{
char u;
int count, c;
for (count = 0; count < 1; count++)
{
for (c = 0; c < 10; c++)
{
putchar(c + '0');
}
for (u = 'a'; u <= 'f'; u++)
{
putchar(u);
}
}
putchar('\n');
return (0);
}
