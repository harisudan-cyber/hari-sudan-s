#include<stdio.h>
int main(){
		int a,b,c;
		scanf("%d%d",&a,&b);
		c=a;
		a=b;
		a=c;
		printf("%d\n%d",a,b);
	}