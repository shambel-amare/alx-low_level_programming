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
while (argc--)
printf("%s\n", *argv++);
exit(EXIT_SUCCESS);
}
