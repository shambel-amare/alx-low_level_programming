#ifndef MAIN_H
#define MAIN_H

char _putchar(char c)
{
return (write(1, &c, 1));
}
void print_alphabet(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
}

#endif /*MAIN_H*/
