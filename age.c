// 15.12.2016
// Author - Harshit Prasad
// Counting number of people in age group between 15 to 20

#include <stdio.h>

int main()
{
	// local declarations
	int age[] = {10, 12, 14, 16, 17, 18, 20, 21, 23, 25, 27, 31};
	int i, count; 
	count=0; // intializing count to 0 
	for(i=0; i<11; i++)
	{
		if(age[i]>15 && age[i]<20) // condition
		{
			count++; // increments the value count by +1
		}
	}
	printf("Number of people between age group of 15 and 20 = %d\n", count);
	return 0;
}
