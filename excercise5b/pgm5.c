#include <stdio.h>
#include <math.h>

typedef struct _point_{
	short int x,y;
}Point;

typedef struct _rectangle_{
	Point p1,p2,p3,p4;
}Rectangle;


Point createPoint(short int x,short int y){
	Point pt;
	pt.x=x;
	pt.y=y;
	return pt;
}

Rectangle createRectangle(){

	short int x,y;
	Point p1,p2,p3,p4;
	printf("Enter coordinates to form rectangle in order\n");
	printf("Point 1: ");
	scanf("%hd%hd",&x,&y);
	p1=createPoint(x,y);
	printf("Point 2: ");
	scanf("%hd%hd",&x,&y);
	p2=createPoint(x,y);
	printf("Point 3: ");
	scanf("%hd%hd",&x,&y);
	p3=createPoint(x,y);
	printf("Point 4: ");
	scanf("%hd%hd",&x,&y);
	p4=createPoint(x,y);

	Rectangle rect;
	rect.p1=p1;
	rect.p2=p2;
	rect.p3=p3;
	rect.p4=p4;

	return rect;

}


float findDistance(short int x1,short int y1,short int x2, short int y2){

	float distancesq=(x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);
	return sqrt(distancesq);
}

float computeArea(Rectangle rect){
	float side1=findDistance(rect.p1.x,rect.p1.y,rect.p2.x,rect.p2.y);
	float side2=findDistance(rect.p3.x,rect.p3.y,rect.p2.x,rect.p2.y);
	return side1*side2;
}

float computerPerimeter(Rectangle rect){
	float side1=findDistance(rect.p1.x,rect.p1.y,rect.p2.x,rect.p2.y);
	float side2=findDistance(rect.p3.x,rect.p3.y,rect.p2.x,rect.p2.y);
	return (2*side1)+(2*side2);
}

void checkSameAreas(Rectangle rect1, Rectangle rect2){
	float area1=computeArea(rect1);
	float area2=computeArea(rect2);
	if(area2==area1)
		printf("Both rectangles have same area\n");
	else
		printf("Rectangles don't have same area\n");
}

int main(){

	Rectangle rect1=createRectangle();
	printf("Area of given rectangle is %.2f\n",computeArea(rect1));
	printf("Perimeter of given rectangle is %.2f\n",computerPerimeter(rect1));
	Rectangle rect2=createRectangle();
	checkSameAreas(rect1,rect2);
	return 0;

}