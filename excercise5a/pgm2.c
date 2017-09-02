//C program to find the length of string

#include <stdio.h>

int str_len(char *str)
{
	int i;
	for(i=0;str[i]!='\0';i++);
	return i;
} 

int main(){
	char str1[50];
	printf("Enter a string: ");
	scanf("%s",str1);
	printf("Length of string: %d\n",str_len(str1));
	return 0;
}
