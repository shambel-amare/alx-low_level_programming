#include <stdio.h>
/**
* main - Entry point
*Return: Always 0 (success)
*/
int main(void)
{
char l, u;
int count;
for (count = 0; count < 1; count++)
{
for (l = 'a'; l <= 'z'; l++)
{
putchar(l);
}
for (u = 'A'; u <= 'Z'; u++)
{
putchar(u);
}
}
putchar('\n');
return (0);
}
