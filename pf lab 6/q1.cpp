#include <stdio.h>
int main(){
	int num,i;
	unsigned long long factorial=1;
	printf("enter a number");
	scanf("%d",&num);
	if(num<0){
		printf("Factoral for a negative number does not exist");}	
else {
    for(i = 1; i <= num; i++) {
            factorial *= i;
        }
        printf("Factorial of %d = %llu\n", num, factorial);
    }
	return 0;
}

