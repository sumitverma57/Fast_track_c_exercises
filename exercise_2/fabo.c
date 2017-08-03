#include <stdio.h>
#include <math.h>
#include <stdbool.h>
bool isPerfectSquare(int x)
{
    int s = sqrt(x);
    return (s*s == x);
}
 
// Returns true if n is a Fibinacci Number, else false
bool isFibonacci(int n)
{
    // n is Fibinacci if one of 5*n*n + 4 or 5*n*n - 4 or both
    // is a perferct square
    return isPerfectSquare(5*n*n + 4) ||
           isPerfectSquare(5*n*n - 4);
}
 
// A utility function to test above functions
int main()
{ int l,m,n;
  printf("Enter three numbers ");
  scanf("%d %d %d", &l, &m, &n);
     isFibonacci(l)? printf("%d is a Fibonacci Number \n", l):
                     printf("%d is a not Fibonacci Number \n", l) ;
     isFibonacci(m)? printf("%d is a Fibonacci Number \n", m):
                     printf("%d is a not Fibonacci Number \n", m) ;
     isFibonacci(n)? printf("%d is a Fibonacci Number \n", n):
                     printf("%d is a not Fibonacci Number \n", n) ;
  return 0;
}