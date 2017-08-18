#include<stdio.h>

int main()
{
	char c[50],s[50];
	int i = 0, j = 0, k = 0, l = 0, m = 0, index[30] = {0};
	index[0] = 1;

	printf("Enter a sentence:\n");
	fgets(c,50,stdin);
	printf("Enter the pattern to be found:\n");
	fgets(s,50,stdin);

	while((c[i] != '\n'))
	{
		if(c[i] == s[j])
		{
			i++;
			if((s[j+1] == '\n'))
			{
				k++;
				m++;
				j = 0;
			}
			else
			{
				j++;
			}
		}
		else
		{
			if(c[i] == ' ')
			{
				index[k] = i+2;
			}
			i++;
			j = 0;
		}

	}

	while(m > 0)
	{
		printf("Found at index = %d.\n",(index[l++]));
		m--;
	}

	return 0;
}
