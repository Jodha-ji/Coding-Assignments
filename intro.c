// 15.12.2016
// Author - Harshit Prasad

#include <stdio.h>

void array(int arr[], int n) // function prototype
{
  int i;
  for(i=0; i<l; i++)
  {
    scanf("%d", &arr[i]); // store each integer input by the user
  }
}

void main()
{
  int mean, l, a[20];
  printf("Enter the length of array: \n");
  scanf("%d", &l);
  // input array elements
  printf("Enter the array elements: \n");
  array(a, l); // function call
  int sum=0;
  int j;
  for(j=0; j<l; j++)
  {
    sum = sum + a[i]; // calculates the sum of all the elements
  }
  mean = sum / l;
  printf("Mean of the numbers = %d\n", mean);
}
