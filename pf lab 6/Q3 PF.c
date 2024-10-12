#include <stdio.h>
int main (){
int num;
	do{
	printf("enter a Positive number");
	scanf("%d",&num);
	if(num<=0){
	printf("NO\n");	
	}
	}while(num<=0);
	printf("Hell Yeah(_%d_)",num);
    return 0;
	}
