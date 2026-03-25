#include <iostream>
#include <vector>
#include "DynamicArray.h"

using namespace std;

//void Test(int A)
//{
//
//}

//Default Argumnent
void Test(int A = 2, int B = 1, int C = 0)
{
	cout << A << endl;
	cout << B << endl;
	cout << C << endl;
}

int main()
{
	Test(1, 2, 3);

	return 0;

	DynamicArray D(4);

	for (int i = 0; i < 8; ++i)
	{
		cout << D.GetSize() << endl;
		cout << D.GetCapacity() << endl;
		cout << "----------------------------" << endl;

		D.PushBack(i+1);
	}

	//[1][2][3][4][5][6][7][8]
	D.RemoveAt(3);

	cout << D.GetSize() << endl;
	cout << D.GetCapacity() << endl;
	cout << "----------------------------" << endl;
	for (int i = 0; i < D.GetSize(); ++i)
	{
		cout << D[i] << ", ";
	}
	//[1][2][3][5][6][7][8]

	cout << endl;

	D.RemoveAt(5);

	cout << D.GetSize() << endl;
	cout << D.GetCapacity() << endl;
	cout << "----------------------------" << endl;


	for (int i = 0; i < D.GetSize(); ++i)
	{
		cout << D[i] << ", ";
	}
	//[1][2][3][5][6][8]
	cout << endl;

	D.PushBack(9);

	for (int i = 0; i < D.GetSize(); ++i)
	{
		cout << D[i] << ", ";
	}
	//[1][2][3][5][6][8][9]
	cout << endl;

	cout << D.GetSize() << endl;
	cout << D.GetCapacity() << endl;
	cout << "----------------------------" << endl;

	



	return 0;
}
