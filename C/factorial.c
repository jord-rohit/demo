// Write a C program to find the factorial of a given number using for loop
#include <stdio.h>
int main()
{
    int a,s=1;
    printf("enter any number");
    scanf("%d", &a);
    for (int i = a; i >= 1; i--)
    {
        s= s*i;
        printf("%d\n",s);
    }
    

}