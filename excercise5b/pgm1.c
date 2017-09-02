#include <stdio.h>

typedef struct _point_{
	short int x,y;
}Point;

Point createPoint(short int x,short int y){
	Point pt;
	pt.x=x;
	pt.y=y;
	return pt;
}

unsigned short int pointQuadrant(Point pt){

	unsigned short int ret=0;
	if(pt.x>0 && pt.y>0)
		ret=1;
	else if(pt.x>0 && pt.y<0)
		ret=4;
	else if(pt.x<0 && pt.y>0)
		ret=2;
	else if(pt.x<0 && pt.y<0)
		ret=3;
	return ret;
}

unsigned short int comparePoints(Point pt1,Point pt2){

	if(pt1.x==pt2.x && pt1.y==pt2.y)
		return 1;
	else
		return 0;
}

int main(){

	short int x,y;
	unsigned short int quad;
	Point pt1,pt2;
	printf("Enter x and y coordinates of a point: ");
	scanf("%hd%hd",&x,&y);
	pt1=createPoint(x,y);
	if(quad=pointQuadrant(pt1))
		printf("Point belongs to %hd quadrant\n",quad);
	else
		printf("Point is the origin\n");
	printf("Enter x and y coordinates of another point: ");
	scanf("%hd%hd",&x,&y);
	pt2=createPoint(x,y);
	if(comparePoints(pt1,pt2))
		printf("Points are the same\n");
	else
		printf("Points aren't the same\n");
	return 0;
}