#include<stdio.h>
int main(){
	char a;
	scanf("%c",&a);
	if(a>='0' && a<='9'){
		printf("given character is digit");
	}
	else{
		printf("given character is not a digit");
	}
	return 0;
}