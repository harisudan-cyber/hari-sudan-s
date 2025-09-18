#include<stdio.h>
int main(){
	int a;
	scanf("%d",&a);
	if(a&1==1){
		printf("a is odd");
	}
	else{
		printf("a is even");
	}
	return 0;
}