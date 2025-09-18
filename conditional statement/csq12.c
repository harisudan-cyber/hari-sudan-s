#include<stdio.h>
int main(){
	int a;
	scanf("%d",&a);
	a=a%10;
	if(a%2==0){
		printf("last digit is even number");
	}
	else{
		printf("last digit is odd number");
	}
	return 0;
}