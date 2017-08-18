#include<stdio.h>
#include<string.h>
int occur(char *, char);

int main()
{
	int vowels;
	char input[100],ch;

	printf("Enter a string:\n");
	fgets(input,100,stdin);
	printf("Enter the vowel you want to check:\n");
	scanf("%c",&ch);

	vowels = occur(input,ch);
	printf("%c occurs %d times in the given string.\n",ch,vowels);
	return 0;
}
int occur(char *ptr, char ch)
{
	int count = 0;

	while(*ptr != '\0')
	{
		if(*ptr == ch)
		count++;
		ptr++;
	}

	return count;
}
