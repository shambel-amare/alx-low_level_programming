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
int x1, x2;
if (argc > 1)
{
x1 = atoi(argv[1]);
x2 = atoi(argv[2]);
printf("%d\n", x1 *x2);
}
else
{
printf("Error\n");
return (-1);
}
return (0);
}
