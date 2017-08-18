#include<stdio.h>

int main()
{
	char c[50],s[50];	
	int i = 0, j = 0, index = 1;

	printf("Enter a sentence:\n");
	fgets(c,50,stdin);
	printf("Enter the pattern to be found:\n");
	fgets(s,50,stdin);

	

	while((c[i] != '\n') && (s[j] != '\n'))
	{
		if(c[i] == s[j])
		{
			i++;
			j++;
			
		}
		else
		{
			if(c[i+1] == ' ')
				index = i+2;
			i++;
			j = 0;
		}

	}
	if(j != 0)
		printf("Found at index = %d.\n",(index+1));

	return 0;
}
