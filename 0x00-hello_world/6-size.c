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
printf("The size of a char: %lu \n", (unsigned long)sizeof(c));
printf("The size of an int: %lu \n", (unsigned long)sizeof(i));
printf("The size of a long int: %lu \n", (unsigned long)sizeof(l));
printf("The size of a long long int: %lu \n", (unsigned long)sizeof(ll));
printf("The size of a float: %lu \n", (unsigned long)sizeof(f));
return (0);
}
