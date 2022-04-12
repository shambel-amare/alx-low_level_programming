#ifndef MYHEADER_H
#define MYHEADER_H

/*Function to print character on stdout*/
char _putchar(char c)
{
return (write(1, &c, 1));
}
/* Function to print alphabets*/
void print_alphabet(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
}
/*Function to print alphabets with 10X while loop*/
void print_alphabet_x10(void)
{
char c;
int i = 0;
while (i < 10)
{
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
i++;
}
}

/*function to print 1 for lowercase and 0 otherwise*/
int _islower(int k)
{
char i;
char c;

if ((k >= 'a' && k <= 'z') || (k >= 'A' && k <= 'Z'))
{
c = k;
}
else
{
c = k + '0';
}
if (c >= 'a')
{
return (1);
}
else
{
return (0);
}
}

/*_isalpha checks for alphabettic character*/
int _isalpha(int c)
{
char i;

if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
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

#endif /*MYHEADER_H*/
