#include<stdio.h>
int main()
{
   char ch;
   printf("Please enter an alphabet : ");
   scanf("%c", &ch);
   if(ch >= 'a' && ch <= 'z')
   {
      printf("\nUpper case of %c is %c\n", ch, ch-32);
   }
   else if(ch >='A' && ch <= 'Z')
   {
      printf("\nLower case of %c is %c\n", ch, ch+32);
   }
   else
   {
      printf("\nEntered character %c is a special character", ch);
   }

   return 0;
}
