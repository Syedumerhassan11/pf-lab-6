#include <stdio.h>

int main() {
int i,n,a=0;
printf("enter a number");
scanf("%d",&n);
for(i=2;i<=n-1;i++){
	if(n%i==0){
	a=1;
	break;	
	}
}
if(n==1) printf("The number is neither nor composite");
else if(a==0) printf("The given number is prime");
else printf("the given number is composite");


    return 0;
}
