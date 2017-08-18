#include <stdio.h>
int c[7]={0};
void get_grade_count(char grad)
{

  switch (grad)
  {
    case ('A'):  c[1]+=1;break;
    case ('B'):  c[2]+=1;break;
    case ('C'):  c[3]+=1;break;
    case ('D'):  c[4]+=1;break;
    case ('E'):  c[5]+=1;break;
    case ('F'):  c[6]+=1;break;
    default: c[7]+=1;break;
  }

}
void display()
{
  printf("A is %d\n",c[1]);
  printf("B is %d\n",c[2]);
  printf("C is %d\n",c[3]);
  printf("D is %d\n",c[4]);
  printf("E is %d\n",c[5]);
  printf("F is %d\n",c[6]);

}
int main()
{
  char grad,j;
  do
  {
    printf("Please enter the grades.");
    scanf("%c", &grad);
    getchar();
    get_grade_count(grad);
    printf("Do you want to enter more values(Y/N)");
    scanf("%c", &j);
    getchar();
  }while(j=='Y'||j=='y');

display();
return 0;
}
