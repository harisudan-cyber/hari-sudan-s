#include<stdio.h>
int main(){
	int a;
	scanf("%d",&a);
	a=a/10;
	if(a%2==0){
		printf("first digit of a 3 digit number is even");
	}
	else{
		printf("first digit of a 3 digit number is odd");
	}
	return 0;
}