//ASSIGNMENT 6: C program for factorial
// 15.12.2016
// Author- Harshit Prasad

#include <stdio.h>

int fact(int num) // function prototype
{
  int m;
  if(num==1)
    return 1;
  else
    m = num * fact(num-1);
    return (m);
}

int main()
{
  int n;
  printf("Enter the number: \n");
  scanf("%d", &n);
  fact(n);
  printf("Factorial of %d is %d\n", n, m);
  return 0;
}
