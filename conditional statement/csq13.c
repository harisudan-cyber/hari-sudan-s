#include<stdio.h>
int main(){
	int a;
	scanf("%d",&a);
	if(a>0){
		printf("it is a positive");
	}
	else if(a<0){
		printf("it is a negative");
	}
	else{
		printf("it is a zero");
	}
}