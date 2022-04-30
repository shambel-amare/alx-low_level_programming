#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *@argc: argument count
*@argv: array of input arguments
*Return: Always 0 (success)
*/
int main(int argc, char *argv[])
{
int x1 = 0;
int i;
if (argc == 1)
{
printf("0\n");
}
if (argc > 1)
{
for (i = 1; i < argc; i++)
{
int x = atoi(argv[i]);

if (*argv[i] < 48 || *argv[i] > 58)
{
printf("Error\n");
return (1);
}
x1 += x;
}
}
printf("%d\n", x1);
return (0);
}
