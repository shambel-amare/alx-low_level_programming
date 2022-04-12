#include <stdio.h>
/**
* main - Entry point
*Return: Always 0 (success)
*/

//function to print 1 for lowercase and 0 otherwise
int _islower(int k)
{
char i;
char c;

if ((k >= 'a' && k <= 'z') || (k >= 'A' && k <= 'Z'))
{
c=k;
}
else
{
c=k+'0';
}
if (c >= 'a')
{
return(1);
}
else
{
return(0);
}

}
int main(void){
int r;

r = _islower(108);
putchar(r + '0');
putchar('\n');
return(0);
}