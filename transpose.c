// ASSIGNMENT 7: Transpose of a matrix
// 15.12.2016
// Author : Harshit Prasad

#include <stdio.h>

void main()
{
	int a[3][3], b[3][3]; // declarations of arrays
	int i, j;
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("Enter a[%d][%d] = ", i, j);
			scanf("%d", &a[i][j]); // initializing the matrix with its elements
		}
	}
	printf("\n You entered the matrix = \n");
	for(i=0; i<3; i++)
	{
		printf("\n");
		for(j=0; j<3; j++)
		{
			printf("%d\t", a[i][j]); // displaying the matrix on the screen
		} // elements are input by the user
	}
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			b[i][j]=a[j][i]; // transpose of the matrix
		}
	}
	printf("\nTranspose of the matrix is- \n");
	
	for(i=0; i<3; i++)
	{
		printf("\n");
		for(j=0; j<3; j++)
		{
			printf("%d\t", b[i][j]); // printing transpose of the matrix
		}
	}
}
