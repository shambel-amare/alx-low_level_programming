#include <stdio.h>
#include "main.h"
/**
*_isaplha checks for alphabetic character.
* main - check the code
* _isalpha function resides in main.h
*Return: Always 0 (success)
*/

int main(void)
{
int r;

r = _isalpha('H');
_putchar(r + '0');
r = _isalpha('o');
_putchar(r + '0');
r = _isalpha(108);
_putchar(r + '0');
r = _isalpha(';');
_putchar(r + '0');
_putchar('\n');
return (0);
}
