#include<stdio.h>
#include<string.h>
char pali(char *);

int main()
{
	char input[100],ch;
	int length;

	printf("Enter a string:\n");
	fgets(input,100,stdin);

	ch = palindrome(input);

	if(ch == 'y')
		printf("The string is a palindrome.\n");
	else
		printf("The string is not a palindrome.\n");


	return 0;
}

char palindrome(char *ptr)
{
	int length,n,i;
	char temp;

	length = strlen(ptr);
	n = 0;
	temp = length - 2;

	while(n <= length/2)
	{
		if(ptr[n] != ptr[temp])
			return 'n';

		n++;
		temp--;
	}

	return 'y';
}
