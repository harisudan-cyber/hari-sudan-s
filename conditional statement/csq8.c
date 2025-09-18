#include<stdio.h>
int main(){
	int a;
	scanf("%d",&a);
	a=a%10;
	if(a%3==0){
		printf("last digit is divisible by 3");
	}
	else{
		printf("last digit is not divisible be 3");
	}
	return 0;
}