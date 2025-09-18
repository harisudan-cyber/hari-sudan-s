#include<stdio.h>
int main(){
	int a;
	scanf("%d",&a);
	if(a>99 && a<1000){
		printf("%d is three digit number",a);
	}
	else{
		printf("%d is not a three digit number",a);
	}
	return 0;
}