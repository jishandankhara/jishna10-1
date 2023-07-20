#include<stdio.h>
divisible(){
	int n1,c;
	printf("Enter a number:");
	scanf("%d",&n1);
	if(n1%5==0&&n1%3==0){
		printf("the given number is divisible by both 3 & 5");
	}else{
		printf("the given number is not divisible by both 3 & 5");	
	}
}void main(){
	divisible();
}
