#include<stdio.h>
int main() 
{
    int i=3;
    printf("i=%d \n",&i);
    printf("i=%d\n",i);
    printf("i=%d\n",*&i);
    return 0 ;
}