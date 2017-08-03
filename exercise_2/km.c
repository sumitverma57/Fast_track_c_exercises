#include <stdio.h>

int main()
{
	double kph, mph;
	printf("enter the data in km per hour");
	scanf("%lf", &kph);
	mph=(0.277777778*kph);
	printf("the data after conversion in mater per second is %lf", mph);
	return 0;  
}