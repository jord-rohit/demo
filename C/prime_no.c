// // wap in c to input any number after that check number is prime or not

// #include <stdio.h>
// int main()
// {
//     int n;
//     int c = 0;
//     printf("Enter any number:");
//     scanf("%d", &n);
//     for (int i = 2; i <= n; i++)
//     {
//         if (n % i == 0)
//         {
//             c += 1;
//         }
//     }
//     if (c == 2)
//     {
//         printf("prime number");
//     }
//     else
//     {
//         printf("not prime");
//     }
// }

#include <stdio.h>
int main()
{
    int n, i, flag = 0;
    printf("Enter any number:");
    scanf("%d", &n);
    for ( i = 2; i < n; i++)
    {
        if(n %i==0){
            flag=1;
            break;
        }
    }
    if(flag==0){
        printf("prime number");
    }
    else{
        printf("not prime");
    }
    

}