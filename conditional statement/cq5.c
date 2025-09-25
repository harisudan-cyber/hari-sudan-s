#include<stdio.h>
int main(){
	char a,b;
	scanf("%c\n%c",&a,&b);
	if(a==b){
			printf("given character is equal");
	}
	else{
		printf("given character is not equal");
	}
	return 0;
}