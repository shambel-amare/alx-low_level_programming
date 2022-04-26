#include "main.h"

/**
 * _memcpy - fills copy n bytes of the memory
 * area from src to dest
 * @src: source of memory area
 * @dest: destination for memory area
 * @n: number of bytes
 * Return: pointer to s string
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
*(dest + i) = *(src + i);
}
return (dest);
}
