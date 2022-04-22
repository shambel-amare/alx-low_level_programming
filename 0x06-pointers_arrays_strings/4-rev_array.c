#include "main.h"

/**
*reverse_array - reverse the order of an array.
*@a: array.
*@n: array's length.
*/

void reverse_array(int *a, int n)
{
int i, temp;
int j = n - 1;
for (i = 0; i < n / 2; i++)
{
temp = a[i];
a[i] = a[j];
a[j] = temp;
j--;
}
}
