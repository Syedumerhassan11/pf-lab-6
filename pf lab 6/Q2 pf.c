#include <stdio.h>
int main (){
	int num,i=2;

	printf("enter a Positive number");
	scanf("%d",&num);
	
	if(num<1){
	printf("Please enter a positive integer greater than 1");
	}
	else{
	printf("Even numbers from 1 to %d are:",num);
	while(i<=num){
	printf(" %d ",i);
	i+=2;}

	}
	return 0;
	}
