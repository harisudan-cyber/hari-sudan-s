#include<stdio.h>
int main(){
	int a;
	scanf("%d",&a);
	if((a&(a-1))==0){
		printf("it is a power of 2");
	}
	else{
		printf("not a power of 2");
	}
	return 0;
}