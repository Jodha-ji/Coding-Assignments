// 15.12.2016
// Author - Harshit Prasad
// This program is to calculate the number of characters in a string

#include <stdio.h>
#include <string.h>

void main()
{
  char word1[20], word2[20];
  int i;
  printf("Enter a string: \n");
  scanf("%s", word2); // inputs the string
  for(i=0; word2[i]!=0; i++)
  {
    word1[i] = word2[i];
    word1[i] = '\0';
  }
  printf("Number of characters : %d\n", i); // calculates the number of characters
}
  
