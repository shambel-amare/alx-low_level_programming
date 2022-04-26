#include "main.h"

/**
 * *_strchr - locates the character in a string
 * @s: the input string
 * @c: character to be located
 * Return: pointer to the first occurrence of the character c
 */
char *_strchr(char *s, char c)
{
unsigned int i;
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == c)
{
break;
}
return (s[i] == c ? (s + i) : '\0');
}
}
