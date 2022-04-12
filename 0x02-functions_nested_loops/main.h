#ifndef MAIN_H
#define MAIN_H

/*Function to print character on stdout*/
char _putchar(char c)
{
return (write(1, &c, 1));
}

/*this function prints the sign of a number*/
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
}

/*Function that computes the absolute value of an integer*/
int _abs(int x)
{
if (x > 0)
{
return (x);
}
else if (x < 0)
{
return (-x);
}
else if (x == 0)
{
return (0);
}
}

#endif /*MAIN_H*/
