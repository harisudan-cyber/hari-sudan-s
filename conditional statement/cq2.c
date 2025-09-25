#include<stdio.h>
int main(){
	char a;
	scanf("%c",&a);
	if(a>='A' && a<='Z'){
		printf("given character in upper case");
	}
	else if(a>='a' && a<='z'){
		printf("given character in lower case");
	}
	else if(a>='0' && a<='9'){
		printf("given character in digit");
	}
	else{
		printf("given character in special symbol");
	}
}