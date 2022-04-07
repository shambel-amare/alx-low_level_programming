#include <stdio.h>

/**
* main - Entry point
*
*Return: Always 0 (success)
*/
int main(void)
{
int i;
char c;
long l;
float f;
long long ll;
printf("The size of a char: ", (unsigned long)sizeof(c));
printf("The size of an int: ", (unsigned long)sizeof(i));
printf("The size of a long int: ", (unsigned long)sizeof(l));
printf("The size of a long long int: ", (unsigned long)sizeof(ll));
printf("The size of a float: ", (unsigned long)sizeof(f));
}
