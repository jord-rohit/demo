// Write a C program to print the multiplication table of a given number using while loop
#include <stdio.h>
int main()
{
    int n;
    printf("enter any number");
    scanf("%d", &n);
    int m = 1;
    while (m <= 10)
    {
        printf("%d X %d = %d\n", n,m,n * m);
        m = m + 1;
    }
}