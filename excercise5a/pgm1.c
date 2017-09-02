//C program to copy contents of one string to another

#include <stdio.h>

char* str_copy(char *str1,int n)
{
	int i;
	static char str2[20];
	for(i=0;i<n;i++)
		str2[i]=str1[i];
	str2[i]='\0';
	return str2;
}

int main()
{
	char str1[20],*str2;
	int n;
	printf("Enter length of string:");
	scanf("%d",&n);
	printf("Enter a string: ");
	scanf("%s",str1);
	str2=str_copy(str1,n);
	printf("Copied string is: %s\n",str2);
	return 0;
}
