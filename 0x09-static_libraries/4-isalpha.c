#include <stdio.h>
#include "main.h"
/**
* _isalpha -checks for alphabetic character.
*Return: Always 0 (success)
* @c: is integer input
*/

int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}
