#include<stdio.h>
 
void printBinary(int num) //for printing binary number
{
   int mask = 0x4000;
   if ((num & 0x8000) == 0)
      printf("0");
   else
      printf("1");
   while (mask != 0) {
      if ((num & mask) == 0)
         printf("0");
      else
         printf("1");
      mask = mask >> 1;
   } }
int main() 
{
   int i, count = 0;
   unsigned int num;
 
   printf("\nEnter the number:"); //entering digits from user
   scanf("%d", &num);
 
   printf("\nDecimal number in binary format :"); //converting decimal to binary
   printBinary(num);
 
   while (num != 0) {
      if (num & 1 == 1) {
         break;
      } else {
         count++;
         num = num >> 1;
      }
   }
   printf("\nTrailing Zeros : %d", count);
   return 0;
}



