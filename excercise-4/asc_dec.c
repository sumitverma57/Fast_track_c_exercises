#include <stdio.h>

int main()
{
	int a[10], n, t;

	printf("Enter the no. of elements:\n");
	scanf("%d", &n);
	printf("\n");
	printf("Enter the element:\n");
	for(int i = 0; i <n; i++)
	{

		scanf("%d", &a[i]);
	}

	for(int j=0 ; j<(n-1) ; j++)
	{
		for(int i=0 ; i<(n-1) ; i++)
		{
			if(a[i+1] < a[i])
			{
				t = a[i];
				a[i] = a[i + 1];
				a[i + 1] = t;
			}
		}
	}

	printf("\n Ascending order: ");
	for(int i=0 ; i<n ; i++)
	{
		printf(" %d", a[i]);
	}

	printf("\n Descending order: ");
	for(int i=n ; i>0 ; i--)
	{
		printf(" %d", a[i-1]);
	}
	return 0;
}
