#include "Array2D.h"
#include "Array2D.cpp"
#include <iostream>
using namespace std;

int main()
{
	Array2D<int> a;
	Array2D<int> b(5, 2);
	cout << b[1][1] << endl;
	/*for (int i = 0; i < b.getRow(); i++)
	{
		for (int m = 0; m < b.getColumn(); i++)
		{
			cout << b[i][m] << endl;
		}
	}*/
	return 0;
}