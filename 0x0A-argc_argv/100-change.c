#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *@argc: argument count
 *@argv: array of input arguments
 *Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
    int count=0;
    if (argc < 2)
    {
        printf("Error\n");
        return (1);
    }
    if (argc == 2)
    {
        int x = atoi(argv[1]);
        if (x <= 0)
        {
        printf(" 0\n");
        return (0);
        }

        if (x % 25 == 0)
        {
            count += x/25;
            printf("%d\n", count);

            return (0);
        }
        if (x % 25 != 0)
        {
            count += x / 25;
            x = x % 25;
        }
        if (x % 10 == 0){
            count += x / 10;
            printf("%d\n", count);

            return (0);
        }
        if (x % 10 != 0)
        {
            count += x / 10;
            x = x % 10;
        }
        if (x % 4 == 0)
        {
            count += x / 4;
            printf("%d\n", count);

            return (0);
        }
        if (x % 4 != 0)
        {
            count += x / 4;
            x = x % 4;
        }
        if (x % 2 == 0)
        {
            count += x / 2;
            printf("%d\n", count);

            return (0);
        }
        if (x % 2 != 0)
        {
            count += x / 2;
            x = x % 2;
        }
        if (x == 1)
        {
            count += 1;
            printf("%d\n", count);

            return (0);
        }
        
    }
    printf("%d\n",count);
    return (0);
}
