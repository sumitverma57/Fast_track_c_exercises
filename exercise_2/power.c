#include <stdio.h>
#include <math.h>

int main()
{
	float m,n;
	double p;
	printf("Enter the number ");
	scanf("%f", &m);
	printf("Enter its power ");
	scanf("%f", &n);
	p=pow(m,n);
	printf("the power(%f,%f) is %lf",m,n,p);

	return 0;
}