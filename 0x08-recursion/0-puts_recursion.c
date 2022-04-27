#include "main.h"
/**
*_puts_recursion -function that prints a string with \n
* @s: the input string
*Return: nothing
 */
void _puts_recursion(char *s)
{
if (*s == 0)
{
putchar('\n');
return;
}
putchar(*s);
_puts_recursion(s + 1);
}
