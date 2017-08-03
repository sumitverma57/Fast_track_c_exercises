#include <stdio.h>
#include <math.h>
int main()
{
	float i,f,a, dis;
	a=-2.85;
	f=0;
	i= 320*5/18;
	dis=(pow(f,2)-pow(i,2))/(2*a);
	printf("%f", dis);
	if(dis<1400)
		printf("\naircraft landed safely with in the runway");
	else
		printf("\naircraft not landed safely");

	return 0;
}