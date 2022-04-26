#include "main.h"

/**
 * _memset - fills the first n bytes of the memory
 * area pointed to by s with the byte b
 * @s: input pointer to string
 * @b: constant char
 * @n: number of bytes
 * Return: pointer to s string
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i = 0;

while (i < n)
{
s[i] = b;
i++;
}
return (s);
}
