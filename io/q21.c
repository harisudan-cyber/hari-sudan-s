#include<stdio.h>
int main(){
	int r;
	char e[12];
	scanf("%d%[^\n]s",&r,&e);
	printf("Roll No:%d\nName:%s",r,e);
	}
