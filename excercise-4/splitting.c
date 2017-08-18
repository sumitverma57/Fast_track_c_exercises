#include<stdio.h>

int name_split(char *);

int main()
{
	char input[100];

	printf("Enter your full name:\n");
	fgets(input,100,stdin);

	name_split(input);

	return 0;
}

int name_split(char *ptr)
{
	int i=0,j=0;
	char name[100],name_part[3][10] = {"First","Middle","Last"};

	while(*ptr != '\n')
	{
		if((*ptr == ' '))
		{
			name[i] = '\0';
			printf("%s name: %s\n",name_part[j],name);
			j++;
			i = 0;
			ptr++;
		}
		else
		{
			name[i] = *ptr;
			i++;
			ptr++;
		}
	}

	name[i] = '\0';
	printf("%s name: %s\n",name_part[j],name);

	return 0;
}
