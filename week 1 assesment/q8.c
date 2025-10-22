#include<stdio.h>
#include<string.h>


int main()
{
    char str[100],reversed[100];
    scanf("%s",&str);
    int len=strlen(str);
    for(int i=0;i<len;i++){
    	reversed[i]=str[len-i-1];
	}
    reversed[len]='\0';

    if(strcmp(str , reversed)  == 0 )
        printf("palindrome");
    else
        printf("not palindrome");

        return 0;
}
