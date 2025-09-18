#include<stdio.h>
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	if(a<b){
		printf(" smaller value is %d",a);
	}
	else{
		printf(" smaller value is %d",b);
	}
	return 0;
}