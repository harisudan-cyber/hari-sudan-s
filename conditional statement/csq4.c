#include<stdio.h>
int main(){
	int a,b,c;
	scanf("%d%d",&a,&b);
	c=a-b;
	if(c%2==0){
		printf("difference is a even number");
	}
	else{
		printf("difference is a odd number");
	}
	return 0;
}