#include <stdio.h>

int compare(int arr1[], int arr2[], int n)
{
	int flag=0;
	for(int i=0;i<n;i++)
  {
		if(arr1[i]!=arr2[i])
			flag=1;
	}

 return flag;

}
int main()
{

	int r,n,arr1[5],arr2[5];
	printf("Enter number of elements in the array:\n");
	scanf("%d",&n);
	printf("Enter first array:\n");
	for(int i=0;i<n;i++)
		scanf("%d",&arr1[i]);
	printf("Enter second array:\n");
	for(int i=0;i<n;i++)
		scanf("%d",&arr2[i]);
    r=compare(arr1,arr2,n);
	if(r==1)
		printf("Arrays are not equal\n");
	else
		printf("Arrays are equal\n");
}
