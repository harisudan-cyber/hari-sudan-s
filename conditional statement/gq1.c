#include<stdio.h>
int main(){
	int a,b,c;
	scanf("%c\n%c\n%c",&a,&b,&c);
	if(a==b && a==c){
		printf("given triangle is equilateral");
	}
	else if(a==b || a==c){
		printf("given triangle is isosceles");
	}
	else{
		printf("given triangle is scalene");
	}
	return 0;
	}