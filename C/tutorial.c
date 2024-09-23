#include <stdio.h>
#include<math.h>
int sum ();
void printstar(int n)
{
      for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                  printf("%c",'*');
            }
            printf("\n");
      }
}

int main(){
printstar(10);
printf("%d",sum(6.4));
}


int sum(){
      int x,y,z;
      printf("Enter first number:");
      scanf("%d",&x);
      printf("Enetr second number:");
      scanf("%d",&y);
      z=x+y;
      return z;
}
