#include <stdio.h>

typedef struct _clock_{
	short int hours,minutes,seconds;
}Clock;

Clock initialise(){
	Clock cl;
	cl.hours=cl.minutes=cl.seconds=0;
	return cl;
}

Clock setTime(){

	Clock cl;
	short int hr,min,sec;
	printf("Enter time details\n");
	do{
		printf("Hours: ");
		scanf("%hd",&hr);getchar();
	}while(hr>23||hr<0);
	do{
		printf("Minutes: ");
		scanf("%hd",&min);getchar();
	}while(min>=60||min<0);
	do{
		printf("Seconds: ");
		scanf("%hd",&sec);getchar();
	}while(sec>=60||sec<0);

	cl.hours=hr;
	cl.minutes=min;
	cl.seconds=sec;

	return cl;
}

void getTime(Clock cl){

	printf("Time is %hd hours %hd minutes %hd seconds\n\n",cl.hours,cl.minutes,cl.seconds);
}

Clock addTime(Clock cl1,Clock cl2){

	Clock new_cl=initialise();
	new_cl.hours=cl1.hours+cl2.hours;
	new_cl.minutes=cl1.minutes+cl2.minutes;
	new_cl.seconds=cl1.seconds+cl2.seconds;
	if(new_cl.seconds>=60){
		new_cl.minutes++;
		new_cl.seconds-=60;
	}
	if(new_cl.minutes>=60){
		new_cl.hours++;
		new_cl.minutes-=60;
	}
	if(new_cl.hours>23){
		new_cl.hours-=24;
	}
	return new_cl;

}

int main()
{
	Clock cl1,cl2,new_cl;
	printf("\n24 Hour Format\n\n");
	cl1=initialise();
	cl1=setTime();
	getTime(cl1);

	cl2=initialise();
	cl2=setTime();
	getTime(cl2);

	new_cl=addTime(cl1,cl2);
	printf("Adding the two times.....\n");
	getTime(new_cl);

	return 0;
}