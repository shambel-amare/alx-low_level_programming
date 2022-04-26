#include "main.h"

/**
 * _memset - fills copy n bytes of the memory
 * area from src to dest
 * @src: source of memory area
 * @dest: destination for memory area
 * @n: number of bytes
 * Return: pointer to s string
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;
for (i; i < n; i++)
{
dest[i] = src[i];
}
}
