#include<stdio.h>
int main(){
	char c;
	scanf("%[^\n]s",&c);
	printf("\"%s\"",&c);
	return 0;
}