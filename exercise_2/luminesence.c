#include <stdio.h>

int main()
{
	float w, lpw;
	double lu;
	printf("Enter the (watts) and (lumens per watt)");
	scanf("%f %f", &w, &lpw);
	lu= (w*lpw);
	printf("the luminous flux is %lf", lu);

	return 0;
}