// write a c program to print all natural number from 1 to n using for loop
#include <stdio.h>
int main()
{
    int n;
    printf("Enter any number:");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("%d\n", i);
    }
}