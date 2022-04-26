#include "main.h"

/**
*print_buffer - Print a buffer 10 bytes per line.
*@b: Buffer address.
*@size: Number of characters to be printed.
*/
void print_buffer(char *b, int size)
{
int j, k, l;

if (size <= 0)
printf("\n");
else
{
for (j = 0; j < size; j += 10)
{
printf("%.8x:", j);
for (k = j; k < j + 10; k++)
{
if (k % 2 == 0)
printf(" ");
if (k < size)
printf("%.2x", *(b + k));
else
printf("  ");
}
printf(" ");
for (l = j; l < j + 10; l++)
{
if (l >= size)
break;
if (*(b + l) < 32 || *(b + l) > 126)
printf("%c", '.');
else
printf("%c", *(b + l));
}
printf("\n");
}
}
}
int main(void)
{
char buffer[] = "This is a string!\0And this is the rest of the #buffer :)\1\2\3\4\5\6\7#cisfun\n\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\x20\x21\x34\x56#pointersarefun #infernumisfun\n";

printf("%s\n", buffer);
printf("---------------------------------\n");
print_buffer(buffer, sizeof(buffer));
return (0);
}
