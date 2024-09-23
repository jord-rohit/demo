//  Write a program in C to read 10 numbers from the keyboard and find their sum and average
#include <stdio.h>
int main()
{
    float n;
    float sum=0;
    printf("Enter 10 numbers:");
    for (int i = 0; i < 10; i++)
    {
        scanf("%f",&n);
        sum=sum+n;
    }
    printf("Sum:%f",sum);
    float avg=(sum)/2;
    printf("\nAverage:%f",avg);

    
}
