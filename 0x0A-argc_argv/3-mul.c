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
char sum = 0;

if (argc == 3)
{
while (argc > 0)
{
sum += atoi(*(argv + 1));
argc--;
}
}
else
{
printf("Error\n");
return (-1);
}
printf("%d\n", sum);

return (0);
}
