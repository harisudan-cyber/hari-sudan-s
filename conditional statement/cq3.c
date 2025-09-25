#include<stdio.h>
int main(){
	char a;
	scanf("%c",&a);
	if(a>='A' && a<='Z'){
		printf("given character is alphabet");
	}
	else if(a>='a' && a<='z'){
		printf("given character is alphabet");
	}
	else{
		printf("given character is not a alphabet");
	}
	return 0;
}