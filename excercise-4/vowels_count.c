#include<stdio.h>
int main()
{
char name[30]={"ME big data and data analytics"};
int c=0,i,j;
for(i=0;i<=30;i++)
{
switch(name[i])
{
case 'a':c++;
break;
case 'A':c++;
break;
case 'e':c++;
break;
case 'E':c++;
break;
case 'i':c++;
break;
case 'I':c++;
break;
case 'o':c++;
break;
case 'O':c++;
break;
case 'u':c++;
break;
case 'U':c++;
break;
}
}
printf("number of vowels in the string is %d:", c);
}
