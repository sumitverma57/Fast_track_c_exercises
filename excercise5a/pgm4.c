//C program to check whether two strings are same

#include <stdio.h>

int str_len(char *str)
{
	int i;
	for(i=0;str[i]!='\0';i++);
	return i;
} 

int str_compare(char *str1,char *str2)
{
	int i,ret=1;
	int len1=str_len(str1),len2=str_len(str2);
	if(len1==len2){
		for(i=0;i<len1;i++)
			if(str1[i]!=str2[i])
				ret=0;
	}else
		ret=0;
	return ret;
	
}

int main()
{
	char str1[20],str2[20];
	int n;
	printf("Enter a string: ");
	scanf("%s",str1);
	printf("Enter another string: ");
	scanf("%s",str2);
	if(str_compare(str1,str2)==1)
		printf("Strings are equal\n");
	else
		printf("Strings are not equal\n");
	return 0;
}
