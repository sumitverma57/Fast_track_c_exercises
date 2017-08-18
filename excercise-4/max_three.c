#include<stdio.h>

int max_three(int *);

int main()
{
	int arr_input[10],i;

	printf("Enter ten numbers:\n");
	for(i = 0 ; i < 10 ; i++)
	scanf("%d",&arr_input[i]);
	max_three(arr_input);

	printf("The first 3 maximum numbers in the given list are:\n");
for(i = 0; i < 3; i++)
{	
	printf("Number %d: %d\n",i+1,arr_input[i]);
}
return 0;
}

int max_three(int *ptr)
{
	int i,j;

for(i = 0; i < 10; i++)
{
	for(j = i+1; j < 10; j++)
	{
	if(ptr[i] < ptr[j])
	{
	ptr[i] += ptr[j];
	ptr[j] = ptr[i] - ptr[j];
	ptr[i] -= ptr[j];
	}
}
}
return 0;
}

