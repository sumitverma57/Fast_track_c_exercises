#include <stdio.h>

int main()
{
	float i= 22.222;
	printf("the car speed in m/s is %f", i);
	int t=3; //the time in which car has to stop
	double d;
	int f=0; //final velocity is zero
	d=((i+f)/2)*t;
	printf("\nthe distance car travels before stoping is %lf", d);
	if(d>30)
	{
		printf("\nthe car will hit truck");
	}
	else 
	{
		printf("\nthe car will not hit.");
	}
	return 0;  
}