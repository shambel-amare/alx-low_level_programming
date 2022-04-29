#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *@argc: argument count
*@argv: array of input arguments
*Return: Always 0 (success)
*/
int main(int argc, char **argv)
{
if (argv != 0)
{
printf("%d\n", argc - 1);
}
return (0);
}
