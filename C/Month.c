#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    switch(num){
        case 1:
         printf("January");
            break;
            case 2:
         printf("February");
            break;
            case 3:
         printf("March");
            break;
            case 4:
         printf("April");
            break;
            default:
            printf("you have enter wrong no");
            break;
    }
    return 0;