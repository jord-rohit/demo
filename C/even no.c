// Write a C program to find the sum of all even numbers between 1 to n using while loop#
# include<stdio.h>
int main(){
	int i,num,sum=0;
	scanf("%d",&num);
	for(i=1;i<num;i++){
		if (i%2==0)
		sum =sum+i;
		printf("sum of all even number 1 to %d is %d\n",i,num,sum);
	}
	
	
}
