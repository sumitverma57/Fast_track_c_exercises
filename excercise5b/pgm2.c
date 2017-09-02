#include <stdio.h>

typedef struct _line_{
	short int x1,y1,x2,y2;
}Line;

Line initialise(short int x1,short int y1,short int x2,short int y2){
	Line l;
	l.x1=x1;
	l.x2=x2;
	l.y1=y1;
	l.y2=y2;
	return l;
}

unsigned short int lineType(Line l){

	if(l.x1==l.x2)
		return 1;
	else if(l.y1==l.y2)
		return 2;
	else
		return 3;
}


int main(){

	Line line;
	short int x1,y1,x2,y2;
	unsigned short int type;
	printf("Enter coordinates of one point of line: ");
	scanf("%hd%hd",&x1,&y1);
	printf("Enter coordinates of another point of line: ");
	scanf("%hd%hd",&x2,&y2);
	line=initialise(x1,y1,x2,y2);

	if((type=lineType(line))==1)
		printf("Line is vertical\n");
	else if(type==2)
		printf("Line is horizontal\n");
	else
		printf("Line is oblique\n");

	return 0;
}