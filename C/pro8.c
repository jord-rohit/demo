#include<stdio.h>
int main()
{
    int n=1;
    int i,j;
    for(i=1; i<=5 ; i++){
        for(j=1; j<=i; j++){
            printf("%d",n%2);
n++;
        }printf("\n");
    }
}