#include <stdio.h>
 
int main()
{
  int array[100], maximum, size, c, location = 1;
 
 printf("Enter the number of elements in array\n"); //entering size of an array from user
  scanf("%d", &size);
 
  printf("Enter %d integers\n", size); //entering the elements of array
 
  for (c = 0; c < size; c++)
    scanf("%d" ,&array[c]);
 
  maximum = array[0];
 
  for (c = 1; c < size; c++) //loop for finding maximum value
  {
    if (array[c] > maximum)
    {
       maximum  = array[c];
       location = c+1;
    }
  }
 printf("The maximum value is %d at location %d", maximum, location); //for printing the maximum value and its location
  return 0;
}
