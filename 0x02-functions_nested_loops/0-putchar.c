#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include "main.h"
/**
* main - Entry point
*Return: Always 0 (success)
*Function to print character on stdout
*/
char _putchar(char c)
{
return (write(1, &c, 1));
}
/*main function*/
int main(void)
{
int i;
char str[] = "_putchar\n";
for(i=0; i < strlen(str);i++)
{
_putchar(str[i]);
}
return(0);
}
