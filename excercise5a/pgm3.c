//C program to reverse the content of string

#include <stdio.h>

int str_len(char *str){
	int i;
	for(i=0;str[i]!='\0';i++);
	return i;
} 

char* str_rev(char *str){
	int i,j=0,len=str_len(str);
	static char reverse[20];
	for(i=len-1;i>=0;i--)
		reverse[j++]=str[i];
	reverse[j]='\0';
	return reverse;
}

int main(){
	char str1[20],*rev;
	printf("Enter a string: ");
	scanf("%s",str1);
	rev=str_rev(str1);
	printf("Reversed string is: %s\n",rev);
	return 0;
}
