// 15.12.2016
// Author- Harshit Prasad
// This program is based on sorting of arrays

#include <iostream> 
using namespace std;

void sort(int a[])
{
	int i, swap;
	for(i=0; i<5; i++)
	{
		cin >> a[i]; // inputs elements of the array
	}
	for(int j=0; j<5; j++)
	{
		if(a[j] > a[j+1])
		{
			swap = a[j];
			a[j] = a[j+1];
			a[j+1] = swap;
		}
	} 
}

int main()
{
	// local declarations
	// declaring an array for 5 elements	
	int arr[5];
	int i;
	cout << "Enter the elements in array: " << endl;
	sort(arr); // function call
	cout << "Sorted Array : " << endl;
	for(i=0; i<5; i++)
	{
		cout << arr[i] << endl;
	}
	return 0;
}
