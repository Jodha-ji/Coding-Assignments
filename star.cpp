// C++ language
// 15.12.2016
// Author - Harshit Prasad
#include <iostream>
using namespace std;

int main()
{
	int row, column;
	for(row=1; row<=5; row++)
	{
		for(column=row; column<=5; column++)
		{
			cout << "*";
		}
		cout << " " << endl;
	}
	return 0;
}


	
